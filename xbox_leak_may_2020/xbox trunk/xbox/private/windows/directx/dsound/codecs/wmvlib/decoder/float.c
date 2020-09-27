/*************************************************************************

Copyright (C) Microsoft Corporation, 1996 - 1999

Module Name:

    MsAudio.cpp

Abstract:

    Floating point implementation of public member functions for CAudioObject.

Author:

    Wei-ge Chen (wchen) 11-March-1998

Revision History:


*************************************************************************/

#include "bldsetup.h"

#if !defined(_WIN32_WCE) && !defined(HITACHI)
#include <time.h>
#endif  // _WIN32_WCE

#include <math.h>
#include <limits.h>
#include <stdio.h>
#include "msaudio.h"
#include "macros.h"
#include "AutoProfile.h"

#ifndef BUILD_INTEGER

/////////////////////////////////////////////////////////////////////////
//      Floating point versions of code that has already been integerized
//      this may eventionally be deleted
//////////////////////////////////////////////////////////////////////////

//floating version
WMARESULT prvAdaptTrigToSubframeConfig(CAudioObject *pau)
{
    WMARESULT wmaResult = WMA_OK;
    Int iSize2Use;
	Double dA;
#   if !defined(V4V5_COMPARE_MODE) && !defined(INTEGER_ENCODER)
    const SinCosTable*  pSinCosTable;
#endif

    //if the adjacent size is bigger; just keep your own shape
    //otherwise a transition window is needed.
    if (pau->m_iSizePrev >= pau->m_iSizeCurr) {
        //just forward copy curr
		iSize2Use = pau->m_iSizeCurr;
    }
    else  {
        //long start
		iSize2Use = pau->m_iSizePrev;
    }

#ifdef USE_SIN_COS_TABLES
    switch (iSize2Use){
        case 2048:
            pau->m_piSinForRecon = pau->m_piSinForRecon2048;
            break;
        case 1024:
            pau->m_piSinForRecon = pau->m_piSinForRecon1024;
            break;
        case 512 :
            pau->m_piSinForRecon = pau->m_piSinForRecon512;
            break;
        case 256 :
            pau->m_piSinForRecon = pau->m_piSinForRecon256;
            break;
        case 128 :
            pau->m_piSinForRecon = pau->m_piSinForRecon128;
            break;
        case 64  :
            pau->m_piSinForRecon = pau->m_piSinForRecon64;
            break;
        default: 
            assert(0);
            return (TraceResult (WMA_E_BROKEN_FRAME));
    }
#endif  //maby else out next section


#   if !defined(V4V5_COMPARE_MODE) && !defined(INTEGER_ENCODER)
        // Use lookup-tables if we can 
        // Saves 1% of play time of SH4 and a tiny bit on an 233MHz Pentium II
        if (iSize2Use >= 64 && iSize2Use <= 2048)
        {
            pSinCosTable = rgSinCosTables[iSize2Use>>7];
            // START: see below for detailed explaination
            pau->m_fltSinRampUpStart =   pSinCosTable->sin_PIby4cSB;    //(Int) (sin (0.5 * PI / iSizeCurr / 2) * 0x3FFFFFFF);
            pau->m_fltCosRampUpStart =   pSinCosTable->cos_PIby4cSB;    //(Int) (cos (0.5 * PI / iSizeCurr / 2) * 0x3FFFFFFF);
            // PRIOR: see below for detailed explaination
            pau->m_fltSinRampUpPrior =  -pSinCosTable->sin_PIby4cSB;
            pau->m_fltCosRampUpPrior =   pSinCosTable->cos_PIby4cSB;
            pau->m_fltSinRampUpStep  = 2*pSinCosTable->sin_PIby2cSB;   // STEP = 2 * sin (PI / 2 / iSizeCurr) * 0x3FFFFFFF;
#           ifdef _DEBUG
            {   // Include the next code-block to verify changes to the lookup-table
                dA = PI / (4*iSize2Use);
                assert(fabs(pau->m_fltSinRampUpStart - sin ( dA ) ) <= 0.0001);
                assert(fabs(pau->m_fltCosRampUpStart - cos ( dA ) ) <= 0.0001);
                assert(fabs(pau->m_fltSinRampUpPrior - sin( -dA ) ) <= 0.0001);
                assert(fabs(pau->m_fltCosRampUpPrior - cos( -dA ) ) <= 0.0001);
                assert(fabs(pau->m_fltSinRampUpStep  -  2 * sin( 2*dA ) ) <= 0.0001); 
            }
#           endif // _DEBUG
        }
        else
#   endif // !defined(V4V5_COMPARE_MODE) && !defined(INTEGER_ENCODER)    
        {
            // START:  sin ((0.5 + iSize2Use) * PI / (2*iSize2Use) )
	        //		 = sin ( PI/(4*iSize2Use) + PI/2 ) =  cos( PI/(4*iSize2Use) )
	        // AND:    cos ((0.5 + iSize2Use) * PI / (2*iSize2Use) )
	        //       = cos ( PI/(4*iSize2Use) + PI/2 ) = -sin( PI/(4*iSize2Use) )
	        dA = PI / (4*iSize2Use);
            pau->m_fltSinRampUpStart =  (V4V5COMPARE)(sin ( dA ));
            pau->m_fltCosRampUpStart =  (V4V5COMPARE)(cos ( dA ));
	        // PRIOR:  sin ((0.5 + iSize2Use) * PI / (2*iSize2Use) -PI/(2*iSize2Use) )
	        //       = sin ( PI/(4*iSize2Use) + PI/2 - PI/(2*iSize2Use) ) 
            //       = cos( -PI/(4*iSize2Use) ) = cos( PI/(4*iSize2Use) )
	        // AND:    cos ((0.5 + iSize2Use) * PI / (2*iSize2Use) -PI/(2*iSize2Use) )
	        //       = cos ( PI/(4*iSize2Use) + PI/2 - PI/(2*iSize2Use) ) 
            //       = -sin( -PI/(4*iSize2Use) ) = sin( PI/(4*iSize2Use) )
	        pau->m_fltSinRampUpPrior =  (V4V5COMPARE)(sin( -dA ));
	        pau->m_fltCosRampUpPrior =  (V4V5COMPARE)(cos( -dA ));

            // Rotate by PI/(2*iSize2Use)
	        pau->m_fltSinRampUpStep  =  (V4V5COMPARE)( 2 * sin( 2*dA ) );
        }


    if (pau->m_iSizeNext >= pau->m_iSizeCurr) {
		iSize2Use = pau->m_iSizeCurr;
    }
    else    {
        //just backward copy curr
		iSize2Use = pau->m_iSizeNext;
    }

#ifdef USE_SIN_COS_TABLES
    switch (iSize2Use){
        case 2048:
            pau->m_piSinForSaveHistory = pau->m_piSinForRecon2048+2048;
            break;
        case 1024:
            pau->m_piSinForSaveHistory = pau->m_piSinForRecon1024+1024;
            break;
        case 512 :
            pau->m_piSinForSaveHistory = pau->m_piSinForRecon512+512;
            break;
        case 256 :
            pau->m_piSinForSaveHistory = pau->m_piSinForRecon256+256;
            break;
        case 128 :
            pau->m_piSinForSaveHistory = pau->m_piSinForRecon128+128;
            break;
        case 64  :
            pau->m_piSinForSaveHistory = pau->m_piSinForRecon64+64;
            break;
        default: 
            assert (0);
            return (TraceResult (WMA_E_BROKEN_FRAME));
    }
#endif //USE_SIN_COS_TABLES

#   if !defined(V4V5_COMPARE_MODE) && !defined(INTEGER_ENCODER)
        // Use lookup-tables if we can
        if (iSize2Use >= 64 && iSize2Use <= 2048)
        {
            pSinCosTable = rgSinCosTables[iSize2Use>>7];
            // START: see below for detailed explaination
            pau->m_fltSinRampDownStart =   pSinCosTable->cos_PIby4cSB;  //(Int) sin ((0.5 + iSizeNext) * PI / iSizeNext / 2);
            pau->m_fltCosRampDownStart =  -pSinCosTable->sin_PIby4cSB;  //(Int) cos ((0.5 + iSizeNext) * PI / iSizeNext / 2);
            // PRIOR: see below for detailed explaination
            pau->m_fltSinRampDownPrior =   pSinCosTable->cos_PIby4cSB;
            pau->m_fltCosRampDownPrior =   pSinCosTable->sin_PIby4cSB;
            pau->m_fltSinRampDownStep  = 2*pSinCosTable->sin_PIby2cSB;     // STEP = 2 * sin (PI / 2 / iSizeCurr) * 0x3FFFFFFF;
#           ifdef _DEBUG
            {   // Include this code-block to verify changes to the lookup-table
	            dA = PI/(4* iSize2Use);
                assert(fabs(pau->m_fltSinRampDownStart - cos( dA )) <= 0.0001);
                assert(fabs(pau->m_fltCosRampDownStart + sin( dA )) <= 0.0001);       // + == - -
                assert(fabs(pau->m_fltSinRampDownPrior - cos( dA )) <= 0.0001);
                assert(fabs(pau->m_fltCosRampDownPrior - sin( dA )) <= 0.0001);
                assert(fabs(pau->m_fltSinRampDownStep  - 2 * sin( 2*dA )) <= 0.0001);
            }
#           endif // _DEBUG
        }
        else
#   endif // !defined(V4V5_COMPARE_MODE) && !defined(INTEGER_ENCODER)    
        { 
            // START:  sin ((0.5 + iSize2Use) * PI / (2*iSize2Use) )
	        //		 = sin ( PI/(4*iSize2Use) + PI/2 ) =  cos( PI/(4*iSize2Use) )
	        // AND:    cos ((0.5 + iSize2Use) * PI / (2*iSize2Use) )
	        //       = cos ( PI/(4*iSize2Use) + PI/2 ) = -sin( PI/(4*iSize2Use) )
	        dA = PI/(4* iSize2Use);
            pau->m_fltSinRampDownStart = (V4V5COMPARE)(cos( dA ));
            pau->m_fltCosRampDownStart = (V4V5COMPARE)(-sin( dA ));
	        // PRIOR:  sin ((0.5 + iSize2Use) * PI / (2*iSize2Use) -PI/(2*iSize2Use) )
	        //       = sin ( PI/(4*iSize2Use) + PI/2 - PI/(2*iSize2Use) ) 
            //       = cos( -PI/(4*iSize2Use) ) = cos( PI/(4*iSize2Use) )
	        // AND:    cos ((0.5 + iSize2Use) * PI / (2*iSize2Use) -PI/(2*iSize2Use) )
	        //       = cos ( PI/(4*iSize2Use) + PI/2 - PI/(2*iSize2Use) ) 
            //       = -sin( -PI/(4*iSize2Use) ) = sin( PI/(4*iSize2Use) )
	        pau->m_fltSinRampDownPrior =  (V4V5COMPARE)(cos( dA ));
	        pau->m_fltCosRampDownPrior =  (V4V5COMPARE)(sin( dA ));
	        // Rotate by PI/(2*iSize2Use)

	        pau->m_fltSinRampDownStep  =  (V4V5COMPARE)( 2 * sin( 2*dA ) );
        }

#ifdef INTEGER_ENCODER
    wmaResult = prvAdaptTrigToSubframeConfig_INT(pau);
#endif  // INTEGER_ENCODER
    return wmaResult;
}

#endif // !BUILD_INTEGER

/////////////////////////////////////////////////////////////////////////
//      Floating point versions of code that has already been integerized
//      this may eventually be deleted
//////////////////////////////////////////////////////////////////////////

// DEBUG_BREAK at a particular Frame in prvInverseQuantizeHighRate or prvInverseQuantizeLowRate 
//#define INVERSE_QUANTIZE_AT_FRAME 26
// PRINT CoefRecon for all Frames in range (define or undefine both at once)
//#define PRINT_INVERSE_QUANTIZE_AT_FRAME_FIRST 178
//#define PRINT_INVERSE_QUANTIZE_AT_FRAME_LAST  178
#if defined(_DEBUG) && ( defined(INVERSE_QUANTIZE_AT_FRAME) || defined(PRINT_INVERSE_QUANTIZE_AT_FRAME_FIRST)  )
#	pragma COMPILER_MESSAGE(__FILE__ "(235) : Warning - Float Inverse Quantize Debug Code Enabled.")
static int iInvQuantFrameCount = 0;
static int iInvQuantSubFrameCount = 0;
#endif
#if defined(_DEBUG) && defined(INVERSE_QUANTIZE_AT_FRAME)
#	define DEBUG_BREAK_AT_FRAME_INV_QUANT															\
		if ( pau->m_iCurrSubFrame == 0 && ppcinfo == pau->m_rgpcinfo )								\
		{	iInvQuantFrameCount++;	iInvQuantSubFrameCount = 0; }									\
		else if ( ppcinfo == pau->m_rgpcinfo ) iInvQuantSubFrameCount++;							\
		if ( iInvQuantFrameCount == INVERSE_QUANTIZE_AT_FRAME )										\
			DEBUG_BREAK();				
#elif defined(_DEBUG) && defined(PRINT_INVERSE_QUANTIZE_AT_FRAME_FIRST)
#	define DEBUG_BREAK_AT_FRAME_INV_QUANT															\
		if ( pau->m_iCurrSubFrame == 0 && ppcinfo == pau->m_rgpcinfo )								\
		{	iInvQuantFrameCount++;	iInvQuantSubFrameCount = 0; }									\
		else if ( ppcinfo == pau->m_rgpcinfo ) iInvQuantSubFrameCount++;
#else	// defined(_DEBUG) && defined(INVERSE_QUANTIZE_AT_FRAME)
#	define DEBUG_BREAK_AT_FRAME_INV_QUANT
#endif	// defined(_DEBUG) && defined(INVERSE_QUANTIZE_AT_FRAME)
#if defined(PRINT_INVERSE_QUANTIZE_AT_FRAME_FIRST)
#	define PRINT_INVERSE_QUANTIZE(iQ,fltW,fltN)																									\
		if ( PRINT_INVERSE_QUANTIZE_AT_FRAME_FIRST <= pau->m_iFrameNumber &&  pau->m_iFrameNumber <= PRINT_INVERSE_QUANTIZE_AT_FRAME_LAST )	\
			printf("IQ:%4d %2d %1d  %4d  %+16.6f  %+16.6f  %4d %+10.4g\n",																			\
				 pau->m_iFrameNumber, pau->m_iCurrSubFrame, ppcinfo-pau->m_rgpcinfo, iRecon, fltW,rgfltCoefRecon [iRecon], iQ, fltN );
#else
#	define PRINT_INVERSE_QUANTIZE(iQ,fltW,fltN)
#	endif

#ifndef BUILD_INTEGER
#ifdef ENABLE_ALL_ENCOPT

//*************************************************************************************************
// prvInverseQuantizeLowRate() calculates values in rgfltCoefRecon[] prior to DCT 
// Handles both MidRate (NoiseSub and Bark Spectrum) and LowRate (NoiseSub and LPC Spectrum)
//*************************************************************************************************
WMARESULT prvInverseQuantizeLowRate (CAudioObject* pau, PerChannelInfo* ppcinfo,
                                     Int* rgiWeightFactor)
{
    FUNCTION_PROFILE(fp);
    FUNCTION_PROFILE_START(&fp,INVERSE_QUAN_LOW_RATE_PROFILE);
    {
		//Double dblQuantStep = (double)pau->m_iQuantStep/(1<<pau->m_iQuantStepFractBits);
		QuantStepType qstQuantStep = qstCalcQuantStep( pau->m_iQuantStepSize );
		const Float* rgfltWeightFactor  = (Float*) rgiWeightFactor;
		Float fltInvMaxWeight = 1.0F / ppcinfo->m_wtMaxWeight;
        const I16* rgiCoefQ             = ppcinfo->m_rgiCoefQ;
        Float* rgfltCoefRecon           = ppcinfo->m_rgfltCoefRecon;
	    Int iBark = 0;
	    Int iCoefQ = 0;
	    Int iRecon = 0;
        const U8* rgbBandNotCoded       = ppcinfo->m_rgbBandNotCoded;
        const Int* rgiNoisePower		= ppcinfo->m_rgiNoisePower;
	    //	Float* rgfltNoise = pau->m_rgfltGaussRand + (rand () % (20480 / pau->m_cSubband)) * pau->m_cSubband; //swith to diff segments
	    U8 cNoiseBand;
	    Int iNoiseBand = 0;
		QuantStepType qstQuantStepDivMaxWeight = qstQuantStep * fltInvMaxWeight;
		Float fltNoiseFactor;
		Int iTarget;

		DEBUG_BREAK_AT_FRAME_INV_QUANT;
		MONITOR_RANGE(gMR_QuantStepXInvMaxWeight,qstQuantStep*fltInvMaxWeight);		// match monitor in integer version

		if (!pau->m_fNoiseSub) {
			// Unusual case, but 8kHz Mono 8kpbs gets here
			memset (rgfltCoefRecon, 0, pau->m_cLowCutOff * sizeof (Float));
			for (iRecon = pau->m_cLowCutOff; iRecon < pau->m_cHighCutOff; iRecon++, iCoefQ++)
    			rgfltCoefRecon [iRecon] = (Float)((Float) (rgiCoefQ [iCoefQ]) * rgfltWeightFactor [iRecon] * qstQuantStepDivMaxWeight );
			memset (rgfltCoefRecon + pau->m_cHighCutOff, 0, (pau->m_cSubband - pau->m_cHighCutOff) * sizeof (Float));
            FUNCTION_PROFILE_STOP(&fp);
			return WMA_OK;
		}

		cNoiseBand = rgbBandNotCoded[0];

		fltNoiseFactor = pau->m_fltDitherLevel / (Float) 0x20000000;
		iTarget = pau->m_cLowCutOff;
		while  (iRecon < iTarget) 	
		{	// This does not happen in V2 sounds, don't bother to optimize
		    Float fltNoise = fltNoiseFactor * ((Float) quickRand (&(pau->m_tRandState)));
		    rgfltCoefRecon [iRecon] = (Float) (fltNoise * rgfltWeightFactor [pau->m_cLowCutOff] * qstQuantStepDivMaxWeight );
			MONITOR_RANGE(gMR_CoefRecon,rgfltCoefRecon[iRecon]);
			MONITOR_COUNT_CONDITIONAL(fabs(rgfltCoefRecon[iRecon])<(1.0F/(1<<TRANSFORM_FRACT_BITS)),gMC_zeroCoefRecon,1);
			MONITOR_RANGE(gMR_WeightRatio,(rgfltWeightFactor[pau->m_cLowCutOff]*fltInvMaxWeight));
			PRINT_INVERSE_QUANTIZE(0,rgfltWeightFactor[pau->m_cLowCutOff],fltNoise);
		    iRecon++;
        }

		iTarget = pau->m_iFirstNoiseIndex;
	    while  (iRecon < iTarget) {
            Float fltNoise = ((Float) quickRand (&(pau->m_tRandState))) * fltNoiseFactor;
		    if (iRecon >= pau->m_rgiBarkIndex [iBark + 1]) 
				iBark++;
            assert(iBark < NUM_BARK_BAND);
		    rgfltCoefRecon [iRecon] = (Float) ((rgiCoefQ [iCoefQ] + fltNoise) * rgfltWeightFactor [iRecon] *
                qstQuantStepDivMaxWeight );			
			MONITOR_RANGE(gMR_CoefRecon,rgfltCoefRecon[iRecon]);
			MONITOR_COUNT_CONDITIONAL(fabs(rgfltCoefRecon[iRecon])<(1.0F/(1<<TRANSFORM_FRACT_BITS)),gMC_zeroCoefRecon,1);
			MONITOR_RANGE(gMR_WeightRatio,(rgfltWeightFactor[iRecon]*fltInvMaxWeight));
			MONITOR_RANGE(gMR_weightFactor,rgfltWeightFactor[iRecon]);
			MONITOR_RANGE(gMR_QuantStepXMaxWeightXWeightFactor,rgfltWeightFactor[iRecon]*qstQuantStepDivMaxWeight);
			PRINT_INVERSE_QUANTIZE(rgiCoefQ [iCoefQ],rgfltWeightFactor [iRecon],fltNoise);
		    iRecon++;
		    iCoefQ++;
        }  
		
        while  (iRecon < pau->m_cHighCutOff) {
		    if (iRecon >= pau->m_rgiBarkIndex [iBark + 1]) 
				iBark++;
            assert(iBark < NUM_BARK_BAND);
			iTarget = min(pau->m_rgiBarkIndex [iBark + 1],pau->m_cHighCutOff);

			if (rgbBandNotCoded [iBark] == WMAB_TRUE)
            {
                // Exact match with int-float decoder only when I store in two variables! Naveen
                Float fltNoisePower0 = (Float)qstCalcQuantStep(rgiNoisePower [iNoiseBand]);
                Float fltNoisePower1 = pau->aupfnCalcSqrtBWRatio(ppcinfo, iNoiseBand, cNoiseBand);
                Float fltNoisePower = fltNoisePower0 * fltNoisePower1;

                assert(iBark < NUM_BARK_BAND);
				fltNoisePower *= fltInvMaxWeight / (Float) 0x20000000;
			    while (iRecon < iTarget)
                {
				    rgfltCoefRecon [iRecon] = ((Float) quickRand (&(pau->m_tRandState))) * fltNoisePower 
											* rgfltWeightFactor [iRecon];
					MONITOR_RANGE(gMR_CoefRecon,rgfltCoefRecon[iRecon]);
					MONITOR_COUNT_CONDITIONAL(fabs(rgfltCoefRecon[iRecon])<(1.0F/(1<<TRANSFORM_FRACT_BITS)),gMC_zeroCoefRecon,1);
					MONITOR_RANGE(gMR_WeightRatio,(rgfltWeightFactor[iRecon]*fltInvMaxWeight));
					MONITOR_RANGE(gMR_weightFactor,rgfltWeightFactor[iRecon]);
					PRINT_INVERSE_QUANTIZE(0,rgfltWeightFactor [iRecon],rgfltCoefRecon [iRecon]/rgfltWeightFactor [iRecon]);
				    iRecon++;	
			    }
			    iNoiseBand++;
		    }
		    else 
			{
				if ( pau->m_cHighCutOff < iTarget )
					iTarget = pau->m_cHighCutOff;
			    while (iRecon < iTarget)
                {
					Float fltNoise = ((Float) quickRand (&(pau->m_tRandState))) * fltNoiseFactor;
					rgfltCoefRecon [iRecon] = (Float) ((rgiCoefQ [iCoefQ] + fltNoise) * rgfltWeightFactor [iRecon] *
						qstQuantStepDivMaxWeight );			
					MONITOR_RANGE(gMR_CoefRecon,rgfltCoefRecon[iRecon]);
					MONITOR_COUNT_CONDITIONAL(fabs(rgfltCoefRecon[iRecon])<(1.0F/(1<<TRANSFORM_FRACT_BITS)),gMC_zeroCoefRecon,1);
					MONITOR_RANGE(gMR_WeightRatio,(rgfltWeightFactor[iRecon]*fltInvMaxWeight));
					MONITOR_RANGE(gMR_QuantStepXMaxWeightXWeightFactor,rgfltWeightFactor[iRecon]*qstQuantStepDivMaxWeight);
					MONITOR_RANGE(gMR_weightFactor,rgfltWeightFactor[iRecon]);
					PRINT_INVERSE_QUANTIZE(rgiCoefQ [iCoefQ],rgfltWeightFactor [iRecon],fltNoise);
					iRecon++;
					iCoefQ++;
				}
		    }
	    }

		iTarget = pau->m_cSubband;
		fltNoiseFactor *= (Float)(rgfltWeightFactor [pau->m_cHighCutOff - 1] * qstQuantStepDivMaxWeight);
	    while  (iRecon < iTarget) 	{
		    rgfltCoefRecon [iRecon] = ((Float) quickRand (&(pau->m_tRandState))) * fltNoiseFactor;
			// MONITOR_RANGE(gMR_CoefRecon,rgfltCoefRecon[iRecon]);
			// if (fabs(rgfltCoefRecon[iRecon])<(1.0F/(1<<TRANSFORM_FRACT_BITS))) { MONITOR_COUNT(gMC_zeroCoefRecon,1); }
			MONITOR_RANGE(gMR_WeightRatio,(rgfltWeightFactor[pau->m_cHighCutOff-1]*fltInvMaxWeight));
			MONITOR_RANGE(gMR_QuantStepXMaxWeightXWeightFactor,rgfltWeightFactor[pau->m_cHighCutOff-1]*qstQuantStepDivMaxWeight);
			MONITOR_RANGE(gMR_weightFactor,rgfltWeightFactor[pau->m_cHighCutOff-1]);
			PRINT_INVERSE_QUANTIZE(0,rgfltWeightFactor [iRecon],rgfltCoefRecon [iRecon]/rgfltWeightFactor [pau->m_cHighCutOff - 1]);
		    iRecon++;
        }    
    }
    FUNCTION_PROFILE_STOP(&fp);
	return WMA_OK;
}
#endif // ENABLE_ALL_ENCOPT
#endif // !BUILD_INTEGER



