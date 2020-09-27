
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0347 */
/* at Mon Apr 29 23:11:10 2002
 */
/* Compiler settings for textmgr.idl:
    Oicf, W0, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)

#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_TextManagerInternal,0x70E2C621,0xE71B,0x4232,0x92,0xB0,0x27,0x38,0xB9,0xF2,0x4D,0x0C);


MIDL_DEFINE_GUID(IID, IID_IVsCompoundAction,0xB414D071,0x87BA,0x411A,0x97,0x80,0x33,0xFC,0x7D,0x87,0xD8,0x82);


MIDL_DEFINE_GUID(IID, IID_IVsCompoundViewChange,0xB5C14FF1,0x8431,0x458c,0xBE,0xBC,0x34,0xC6,0x92,0x5D,0x19,0x76);


MIDL_DEFINE_GUID(IID, IID_IVsCompoundActionEvents,0x29B88B8E,0xBC39,0x45AE,0xAC,0xAB,0x0C,0x67,0x0E,0x49,0xBC,0xC2);


MIDL_DEFINE_GUID(IID, IID_IVsAction,0x15D2C32A,0x0770,0x4872,0xBB,0x5F,0xEC,0x21,0xB0,0xFA,0x24,0x36);


MIDL_DEFINE_GUID(IID, IID_IVsTextEditorPropertyCategoryContainer,0xA6078038,0xD578,0x4F32,0xB9,0xB2,0xC8,0x3E,0x17,0x26,0x45,0x4D);


MIDL_DEFINE_GUID(IID, IID_IVsTextEditorPropertyContainer,0x7669CC95,0x4640,0x461C,0x81,0x58,0x16,0xF6,0x52,0x65,0xD7,0x7C);


MIDL_DEFINE_GUID(IID, IID_IVsCompletionSet,0x0EF79249,0xB0BF,0x4CD0,0xA9,0x66,0xC4,0x71,0x35,0x46,0xC3,0xA5);


MIDL_DEFINE_GUID(IID, IID_IVsTipWindow,0x64C7FFC4,0xB9EE,0x4599,0xB1,0x30,0xFF,0x9D,0x89,0x0E,0xCF,0xD4);


MIDL_DEFINE_GUID(IID, IID_IVsMethodTipWindow,0x794767F6,0x538A,0x4CD3,0xB2,0x9E,0x6C,0x76,0xC7,0x9A,0x7C,0x9C);


MIDL_DEFINE_GUID(IID, IID_IVsTextTipWindow,0xA6ACCB2F,0x1E0D,0x458B,0xA8,0x78,0xD4,0x0E,0xB8,0x9C,0x1D,0xF4);


MIDL_DEFINE_GUID(IID, IID_IVsMethodData,0x69D2811C,0x682C,0x4290,0xB9,0x2E,0x5D,0xFB,0x82,0x3D,0xF2,0x4C);


MIDL_DEFINE_GUID(IID, IID_IVsTextTipData,0x90609097,0x17C8,0x40E8,0x81,0x28,0x67,0x19,0x4C,0x73,0x84,0xB1);


MIDL_DEFINE_GUID(IID, IID_IVsTextView,0xBB23A14B,0x7C61,0x469A,0x98,0x90,0xA9,0x56,0x48,0xCE,0xD5,0xE6);


MIDL_DEFINE_GUID(IID, IID_IVsThreadSafeTextView,0xFEC3BF2A,0x7833,0x4777,0xAE,0x74,0x5F,0xFF,0x86,0xD6,0x79,0x4E);


MIDL_DEFINE_GUID(IID, IID_IVsLayeredTextView,0x60BD661B,0x133C,0x4B5C,0xA3,0x35,0x4B,0x17,0x4C,0x5A,0x35,0x2F);


MIDL_DEFINE_GUID(IID, IID_IVsTextViewFilter,0x6B6F0B32,0xB88B,0x40F8,0xA8,0xFE,0x97,0x43,0x8C,0x5B,0xDB,0xEF);


MIDL_DEFINE_GUID(IID, IID_IVsLanguageContextProvider,0x19404D57,0xF8E4,0x42F4,0x92,0x55,0xB8,0xF8,0x89,0xB0,0xC5,0x0C);


MIDL_DEFINE_GUID(IID, IID_IVsTextMarkerContextProvider,0xF1671B6B,0x1090,0x4DFF,0xBB,0xFD,0x13,0x3E,0xB4,0x28,0xBB,0x6C);


MIDL_DEFINE_GUID(IID, IID_IVsViewRangeClient,0x30491A5B,0xA47E,0x4C9C,0x82,0x04,0x18,0x58,0x66,0x48,0xA2,0x77);


MIDL_DEFINE_GUID(IID, IID_IVsTextViewEvents,0xE1965DA9,0xE791,0x49E2,0x9F,0x9D,0xED,0x76,0x6D,0x88,0x59,0x67);


MIDL_DEFINE_GUID(IID, IID_IVsTextManager,0x909F83E3,0xB3FC,0x4BBF,0x88,0x20,0x64,0x37,0x87,0x44,0xB3,0x9B);


MIDL_DEFINE_GUID(IID, IID_IVsShortcutManager,0x78201465,0x554E,0x4A7B,0x99,0x8F,0x44,0x31,0x56,0xFD,0x71,0xD3);


MIDL_DEFINE_GUID(IID, IID_IVsEnumTextBuffers,0x74BBEE88,0xAB6E,0x4276,0x9B,0xD2,0x27,0xF5,0x66,0xB8,0xBB,0xAF);


MIDL_DEFINE_GUID(IID, IID_IVsTextManagerEvents,0xB3175059,0xC6AA,0x4519,0x86,0xC3,0x1F,0xE5,0x94,0xD2,0x6C,0x35);


MIDL_DEFINE_GUID(IID, IID_IVsTextSelectionAction,0xCB49CF53,0xCCE9,0x4493,0xAD,0x7A,0x35,0x95,0xF4,0xC1,0xCA,0xF3);


MIDL_DEFINE_GUID(IID, IID_IVsEnumTextViews,0xDB685578,0xE6D4,0x4D5E,0xB7,0x14,0xFA,0x34,0x4A,0x50,0x9A,0xBF);


MIDL_DEFINE_GUID(IID, IID_IVsEnumIndependentViews,0xB9040F95,0xDADB,0x443a,0xA3,0xC3,0x1C,0x44,0x2F,0x1B,0xDA,0x72);


MIDL_DEFINE_GUID(IID, IID_IVsColorableItem,0x56694A40,0x78D0,0x45DD,0xAB,0x15,0x68,0x1B,0xC2,0x07,0x57,0x9C);


MIDL_DEFINE_GUID(IID, IID_IVsMergeableUIItem,0x0AE3E015,0x2900,0x4DDF,0x87,0xAF,0xCC,0x52,0x2A,0xE0,0x22,0x84);


MIDL_DEFINE_GUID(IID, IID_IVsProvideColorableItems,0x100B9A33,0x905C,0x4312,0xB2,0xA2,0x45,0x21,0x89,0xF1,0x9A,0xB9);


MIDL_DEFINE_GUID(IID, IID_IVsColorizer,0x6698EF11,0xFF17,0x441C,0x8C,0x5D,0xBC,0x24,0xA3,0x39,0xB3,0x7D);


MIDL_DEFINE_GUID(IID, IID_IVsEnumGUID,0xC7A919CC,0x79C5,0x43D7,0x9B,0x1E,0xB2,0x2E,0x45,0x9F,0x65,0x57);


MIDL_DEFINE_GUID(IID, IID_IVsLanguageInfo,0x11DDB920,0x52C7,0x4237,0x86,0x10,0x9F,0xE8,0xBB,0x11,0x65,0x6D);


MIDL_DEFINE_GUID(IID, IID_IVsLanguageBlock,0xBA303DF5,0x6283,0x4961,0xA4,0xCE,0x76,0xD4,0xF0,0x66,0x2D,0x11);


MIDL_DEFINE_GUID(IID, IID_IVsEnumBSTR,0xA0A9C2B0,0x95A3,0x4819,0xAD,0xA3,0x5B,0xD9,0x75,0x6B,0xBD,0x36);


MIDL_DEFINE_GUID(IID, IID_IVsDebugName,0x0BCE4F72,0x5889,0x4733,0x86,0x05,0x41,0x3C,0x28,0xF5,0x89,0x9F);


MIDL_DEFINE_GUID(IID, IID_IVsEnumDebugName,0x9AD7EC03,0x4157,0x45B4,0xA9,0x99,0x40,0x3D,0x6D,0xB9,0x45,0x78);


MIDL_DEFINE_GUID(IID, IID_IVsLanguageDebugInfo,0xF30A6A07,0x5340,0x4C0E,0xB3,0x12,0x57,0x72,0x55,0x8B,0x0E,0x63);


MIDL_DEFINE_GUID(IID, IID_IVsTextBufferTempInit,0xF229A34E,0x5880,0x4C20,0x94,0xC3,0x71,0x7C,0xF4,0xBE,0x1F,0xDA);


MIDL_DEFINE_GUID(IID, IID_IVsTextBuffer,0xC08E5275,0x0D26,0x4DE9,0x88,0x92,0x99,0x40,0x24,0xC2,0x37,0x50);


MIDL_DEFINE_GUID(IID, IID_IVsTextLines,0xECF3E19D,0x149C,0x43AA,0x80,0xC2,0xD0,0xA4,0x69,0x46,0xDA,0xA3);


MIDL_DEFINE_GUID(IID, IID_IVsTextColorState,0xA7A64DE3,0x9B5C,0x47F0,0xAB,0xAD,0x0A,0xED,0xBD,0x6C,0xC0,0x57);


MIDL_DEFINE_GUID(IID, IID_IVsTextLinesEvents,0x598D7074,0xDC17,0x4162,0x9A,0x2F,0x97,0xDD,0x45,0x40,0xC2,0xDD);


MIDL_DEFINE_GUID(IID, IID_IVsTextStream,0xD3AF020B,0xA862,0x4D22,0xB3,0x73,0x20,0xF1,0xB3,0x0B,0x7D,0x9E);


MIDL_DEFINE_GUID(IID, IID_IVsEnumStreamMarkers,0x06E27359,0x6FEE,0x4CCC,0x9E,0x8B,0xAF,0xC2,0x0C,0x0F,0x66,0x2A);


MIDL_DEFINE_GUID(IID, IID_IVsEnumLineMarkers,0x35E981F1,0x77EF,0x4343,0xAA,0xA1,0x87,0x41,0xF3,0x86,0x27,0xA2);


MIDL_DEFINE_GUID(IID, IID_IVsEnumLayerMarkers,0x8F591607,0x2A26,0x4A9D,0xA6,0xC5,0x14,0x7C,0x2E,0x51,0xE8,0x95);


MIDL_DEFINE_GUID(IID, IID_IVsTextMarker,0x950122D9,0x1A51,0x43CA,0x8C,0xED,0xB5,0xD9,0xE4,0x2D,0xE1,0xB5);


MIDL_DEFINE_GUID(IID, IID_IVsTextStreamMarker,0x10D17872,0x91BA,0x4D65,0x80,0xCC,0xE5,0xFC,0x32,0x22,0xAC,0x82);


MIDL_DEFINE_GUID(IID, IID_IVsTextLineMarker,0x31E2DCA7,0xCCFF,0x4E09,0xB4,0x33,0x17,0xC7,0x39,0xCF,0x69,0xAD);


MIDL_DEFINE_GUID(IID, IID_IVsTextLayerMarker,0x28C149D2,0x8FCB,0x4AB3,0x85,0x84,0x9A,0x27,0x47,0xF3,0xF8,0xFC);


MIDL_DEFINE_GUID(IID, IID_IVsTextMarkerType,0x8C4A2B6E,0x6377,0x4C71,0x99,0x40,0xFB,0xA1,0xBE,0x6E,0xDD,0x6F);


MIDL_DEFINE_GUID(IID, IID_IVsTextMarkerColorSet,0x93373F76,0xDF07,0x46DB,0x94,0x15,0x17,0x72,0x06,0x9F,0x60,0xA4);


MIDL_DEFINE_GUID(IID, IID_IVsPackageDefinedTextMarkerType,0xC70F1528,0x1A66,0x403F,0xAD,0x42,0xF6,0x0F,0x9D,0x41,0x3E,0x05);


MIDL_DEFINE_GUID(IID, IID_IVsTextMarkerTypeProvider,0x7EF86CFD,0xD561,0x4BA5,0x9F,0x38,0xC1,0xBF,0xF5,0x88,0xE3,0xAC);


MIDL_DEFINE_GUID(IID, IID_IVsTextMarkerClient,0xB1938F1B,0xD7A9,0x42F8,0x99,0x60,0xD0,0x09,0x02,0x7B,0x3D,0x2E);


MIDL_DEFINE_GUID(IID, IID_IVsMouseCursorProvider,0xE32F08DB,0x6364,0x4276,0x8E,0xA8,0xBA,0xA6,0x75,0x2F,0x78,0x07);


MIDL_DEFINE_GUID(IID, IID_IVsTextMarkerGlyphDropHandler,0x1E220776,0x3C20,0x46E9,0xA6,0x91,0xDE,0x54,0x9C,0x29,0x5E,0x26);


MIDL_DEFINE_GUID(IID, IID_IVsTextTrackingPoint,0xD6BF0A8A,0x3798,0x49C5,0x88,0x06,0x64,0x8A,0x63,0x5E,0xAC,0xC8);


MIDL_DEFINE_GUID(IID, IID_IVsFullTextScanner,0xBE93F7B1,0xF2FD,0x45B4,0x93,0x8D,0x1C,0x66,0x44,0x1C,0xD4,0x21);


MIDL_DEFINE_GUID(IID, IID_IVsTextScanner,0xEBD73923,0xC190,0x45C1,0x91,0xC5,0x0B,0xC6,0x1A,0x8A,0xAB,0x14);


MIDL_DEFINE_GUID(IID, IID_IVsTextFind,0x0BF16544,0x9CEC,0x40E1,0x80,0xB1,0xE4,0x67,0xE2,0x1B,0x97,0xFE);


MIDL_DEFINE_GUID(IID, IID_IVsTextBufferEvents,0x44B0CAB3,0x6DF8,0x4931,0x90,0x64,0x8F,0xD1,0x8A,0xFB,0xC8,0x8E);


MIDL_DEFINE_GUID(IID, IID_IVsTextBufferDataEvents,0xB7515E7A,0x70F0,0x44ED,0x96,0xB7,0xFB,0x7E,0xB6,0x45,0x0C,0x10);


MIDL_DEFINE_GUID(IID, IID_IVsTextStreamEvents,0x96FC7D44,0xBCDD,0x4F00,0xAE,0x4D,0x07,0xE2,0x6B,0x2C,0x0E,0x52);


MIDL_DEFINE_GUID(IID, IID_IVsSplitPane,0x721D4D8E,0xE987,0x4712,0xB8,0x78,0x88,0xA0,0xE7,0xDB,0xA1,0x17);


MIDL_DEFINE_GUID(IID, IID_IVsSplitter,0x66280096,0xA495,0x48E9,0x8A,0xF4,0xE7,0x58,0xFD,0xE1,0xFC,0xDC);


MIDL_DEFINE_GUID(IID, IID_IVsSplitRoot,0x5486C948,0xAF82,0x4DA5,0xA9,0x68,0x97,0xF3,0xAD,0xA6,0x66,0x70);


MIDL_DEFINE_GUID(IID, IID_IVsCodeWindow,0x8560CECD,0xDFAC,0x4F7B,0x9D,0x2A,0xE6,0xD9,0x81,0x0F,0x34,0x43);


MIDL_DEFINE_GUID(IID, IID_IVsCodeWindowManager,0x4758CB90,0x6110,0x4440,0xB5,0x77,0x2E,0x3F,0xC9,0x1E,0x4B,0x84);


MIDL_DEFINE_GUID(IID, IID_IVsDropdownBarClient,0xAEE77BDD,0x05C8,0x4DE1,0xB4,0x8E,0x1B,0x00,0x3F,0x49,0xAC,0xB7);


MIDL_DEFINE_GUID(IID, IID_IVsDropdownBar,0xD7820968,0x4CF8,0x4760,0xB6,0x33,0x57,0x02,0x82,0xE5,0xF6,0x6D);


MIDL_DEFINE_GUID(IID, IID_IVsDropdownBarManager,0x5CCB1170,0x6527,0x4D88,0xBE,0x3E,0x19,0x8F,0x0E,0xF5,0x53,0x8D);


MIDL_DEFINE_GUID(IID, IID_IVsButtonBarClient,0xB59AF843,0xE075,0x496E,0xA0,0x0D,0xE8,0xEE,0xB3,0xC7,0x48,0xEB);


MIDL_DEFINE_GUID(IID, IID_IVsButtonBar,0x4C4095EC,0x0AF1,0x48B2,0xA9,0x00,0xDB,0x49,0x67,0x65,0xEE,0x9E);


MIDL_DEFINE_GUID(IID, IID_IVsButtonBarManager,0xB4D5B0A3,0x1945,0x4F5F,0xB5,0xE1,0x4A,0xDD,0x35,0x2E,0x78,0xC1);


MIDL_DEFINE_GUID(IID, IID_IVsDefaultButtonBarImages,0x73B7DC00,0xF498,0x4ABD,0xAB,0x79,0xD0,0x7A,0xFD,0x52,0xF3,0x95);


MIDL_DEFINE_GUID(IID, IID_IVsTextMacroHelper,0xCAF8109F,0xB74B,0x429F,0xA1,0x1A,0x49,0x44,0xAA,0xDE,0x9A,0xB2);


MIDL_DEFINE_GUID(IID, IID_IVsUserData,0x978A8E17,0x4DF8,0x432A,0x96,0x23,0xD5,0x30,0xA2,0x64,0x52,0xBC);


MIDL_DEFINE_GUID(IID, IID_IVsUserDataEvents,0x5E120D5E,0x9637,0x47D9,0x86,0x1C,0x92,0xFA,0x03,0x68,0x3C,0x6C);


MIDL_DEFINE_GUID(IID, IID_IVsUndoUnit,0xA8C3D107,0x7EDF,0x4B1B,0x8A,0x81,0x08,0x0A,0xC9,0x15,0x90,0xE9);


MIDL_DEFINE_GUID(IID, IID_IVsUndoTrackingEvents,0x31024DD7,0x30E5,0x4C91,0x82,0x1D,0x21,0x8B,0xDE,0xAD,0xA1,0x8B);


MIDL_DEFINE_GUID(IID, IID_IVsChangeTrackingUndoManager,0xE33C4DCF,0xF50C,0x4356,0x8C,0xD8,0x87,0xA7,0xF2,0x13,0x33,0x7B);


MIDL_DEFINE_GUID(IID, IID_IVsLinkedUndoClient,0x33452684,0xFAB0,0x4F76,0xB4,0xE9,0x19,0xEE,0x0B,0x96,0xB4,0xAD);


MIDL_DEFINE_GUID(IID, IID_IVsLinkCapableUndoManager,0xF747D466,0x83CA,0x41D6,0xA0,0xE8,0x3F,0x78,0x28,0x3D,0x01,0xE7);


MIDL_DEFINE_GUID(IID, IID_IVsLifetimeControlledObject,0xB3B2E5D4,0xF03E,0x4BB9,0x85,0xF9,0x61,0xB5,0xF4,0x5A,0xC4,0x98);


MIDL_DEFINE_GUID(IID, IID_IVsLinkedUndoTransactionManager,0xF65478CC,0x96F1,0x4BA9,0x9E,0xF9,0xA5,0x75,0xAC,0xB9,0x60,0x31);


MIDL_DEFINE_GUID(IID, IID_IVsChangeClusterEvents,0xE55C4E80,0xA01C,0x47E8,0x9E,0x94,0xD6,0x64,0xB9,0x4D,0xF6,0xCF);


MIDL_DEFINE_GUID(CLSID, CLSID_VsLocalUserData,0x5130C7AB,0x85BB,0x11d3,0xB3,0x63,0x00,0xC0,0x4F,0x61,0x1E,0x41);


MIDL_DEFINE_GUID(CLSID, CLSID_VsUserData,0xF5E7E718,0x1401,0x11d1,0x88,0x3B,0x00,0x00,0xF8,0x75,0x79,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_VsCodeWindow,0xF5E7E719,0x1401,0x11d1,0x88,0x3B,0x00,0x00,0xF8,0x75,0x79,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_VsSplitRoot,0xF5E7E71A,0x1401,0x11d1,0x88,0x3B,0x00,0x00,0xF8,0x75,0x79,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_VsDropdownBar,0x452807CC,0x9BFA,0x11d0,0x8C,0x3F,0x00,0xC0,0x4F,0xC2,0xAA,0xE2);


MIDL_DEFINE_GUID(CLSID, CLSID_VsTextBuffer,0x8E7B96A8,0xE33D,0x11d0,0xA6,0xD5,0x00,0xC0,0x4F,0xB6,0x7F,0x6A);


MIDL_DEFINE_GUID(CLSID, CLSID_VsTextLineStorage,0xD6513A91,0xACC8,0x11d2,0x89,0x19,0x00,0x00,0xF8,0x75,0x79,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_VsTextManager,0xF5E7E71D,0x1401,0x11d1,0x88,0x3B,0x00,0x00,0xF8,0x75,0x79,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_VsTextView,0xF5E7E71E,0x1401,0x11d1,0x88,0x3B,0x00,0x00,0xF8,0x75,0x79,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_VsTextPackage,0xF5E7E720,0x1401,0x11d1,0x88,0x3B,0x00,0x00,0xF8,0x75,0x79,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_VsUndoPackage,0x1D76B2E0,0xF11B,0x11d2,0xAF,0xC3,0x00,0x10,0x5A,0x99,0x91,0xEF);


MIDL_DEFINE_GUID(CLSID, CLSID_VsUndoUnit,0x9ADF33D9,0x8AAD,0x11d0,0xB6,0x06,0x00,0xA0,0xC9,0x22,0xE8,0x51);


MIDL_DEFINE_GUID(CLSID, CLSID_VsMethodTipWindow,0x261A5572,0xC649,0x11d0,0xA8,0xDF,0x00,0xA0,0xC9,0x21,0xA4,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_VsTextTipWindow,0x05DD7650,0x130A,0x11d3,0xAF,0xCB,0x00,0x10,0x5A,0x99,0x91,0xEF);


MIDL_DEFINE_GUID(CLSID, CLSID_VsHiddenTextLayer,0x9B6AB22E,0x916A,0x11d2,0x89,0x14,0x00,0x00,0xF8,0x75,0x79,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_VsDefaultButtonBarImages,0xB2715971,0xD02C,0x11d2,0xAF,0xB4,0x00,0x10,0x5A,0x99,0x91,0xEF);


MIDL_DEFINE_GUID(CLSID, CLSID_VsSyntheticTextLayer,0x42469677,0xFCFF,0x11d2,0xAF,0xC4,0x00,0x10,0x5A,0x99,0x91,0xEF);


MIDL_DEFINE_GUID(CLSID, CLSID_VsDiffLayer,0x42469676,0xFCFF,0x11d2,0xAF,0xC4,0x00,0x10,0x5A,0x99,0x91,0xEF);


MIDL_DEFINE_GUID(IID, IID_IVsDynamicTabProvider,0xE82466CA,0xCF0E,0x4653,0x9E,0x76,0x4D,0x4C,0x6C,0x54,0x8D,0xA2);


MIDL_DEFINE_GUID(IID, IID_IVsLastChangeTimeProvider,0x35E88F96,0x047C,0x443C,0xA3,0x36,0x91,0xBB,0x8E,0x2B,0x40,0xEC);


MIDL_DEFINE_GUID(IID, IID_IVsEnumTextSpans,0x0F343A75,0x968B,0x439E,0x81,0xD6,0x0D,0x06,0x6E,0x53,0xD2,0x8D);


MIDL_DEFINE_GUID(IID, IID_IVsTextLayer,0x0E145D3F,0xBEFC,0x4FD9,0x87,0x14,0xB0,0x1A,0xE8,0x9F,0x43,0x96);


MIDL_DEFINE_GUID(IID, IID_IVsSyntheticRegion,0xB9C97AB2,0x2A37,0x4134,0x93,0xE9,0xC3,0x01,0x4F,0x36,0x4A,0xA8);


MIDL_DEFINE_GUID(IID, IID_IVsEnumSyntheticRegions,0x67D9795E,0xCEA4,0x45FF,0xA3,0xDA,0x05,0x5C,0xF7,0x8F,0x13,0x9A);


MIDL_DEFINE_GUID(IID, IID_IVsSyntheticTextClient,0x1A8FBF86,0x5949,0x4E08,0xB9,0xB6,0xF5,0x28,0xAF,0xB2,0xDF,0x9C);


MIDL_DEFINE_GUID(IID, IID_IVsSyntheticTextSession,0x0C71E351,0x5141,0x4B6F,0xB8,0x38,0xE2,0x12,0xF0,0x76,0x48,0x75);


MIDL_DEFINE_GUID(IID, IID_IVsSyntheticTextManager,0x2AB20832,0x0942,0x42F9,0x97,0x4F,0x4E,0x65,0xB8,0x5D,0xAB,0xF3);


MIDL_DEFINE_GUID(IID, IID_IVsTextHidingLayerModule,0x1A705427,0x815C,0x4DB6,0x9B,0x5C,0x6D,0x45,0xCD,0xDD,0xD0,0xC4);


MIDL_DEFINE_GUID(IID, IID_IVsHiddenRegion,0x41E57382,0x63F9,0x48E6,0x9D,0xBD,0x16,0x3D,0x2B,0x14,0xD4,0x1B);


MIDL_DEFINE_GUID(IID, IID_IVsEnumHiddenRegions,0x681B0FFF,0x30B4,0x4578,0xA9,0x11,0xB6,0x7F,0xB0,0x49,0xDA,0xFA);


MIDL_DEFINE_GUID(IID, IID_IVsHiddenTextClient,0xCA3F0E7F,0xCFA6,0x444E,0xA3,0xFE,0x7B,0x3D,0xFA,0xD6,0xE5,0xE4);


MIDL_DEFINE_GUID(IID, IID_IVsHiddenTextManager,0x0E5B1E59,0x53A7,0x4636,0xAD,0xBB,0x0B,0x23,0xC5,0x61,0xE2,0x93);


MIDL_DEFINE_GUID(IID, IID_IVsHiddenTextSession,0x82B21BAE,0x664B,0x43E1,0x95,0xB1,0x03,0x02,0x80,0x5F,0xF7,0xD3);


MIDL_DEFINE_GUID(IID, IID_IVsOutliningSession,0x9A436975,0xA86A,0x4459,0xA3,0x50,0xB0,0x56,0x04,0xB5,0x33,0x09);


MIDL_DEFINE_GUID(IID, IID_IVsOutliningCapableLanguage,0xB97D5C98,0x0507,0x40FA,0xBF,0x89,0xCE,0x4F,0x73,0xEB,0xA6,0x51);


MIDL_DEFINE_GUID(IID, IID_IVsTextLayerEvents,0xCDE3413A,0xAD8E,0x495F,0xA7,0x4F,0x76,0x05,0x47,0x29,0x4A,0x6F);


MIDL_DEFINE_GUID(IID, IID_IVsTextStorage,0x1ABAC269,0x8FB0,0x438E,0x82,0x17,0x23,0x0A,0xC6,0xEB,0x57,0x66);


MIDL_DEFINE_GUID(IID, IID_IVsPersistentTextImage,0xC47FFD1E,0xD84E,0x43A5,0x8C,0xBE,0xE4,0xAD,0x06,0xBE,0x79,0x5B);


MIDL_DEFINE_GUID(IID, IID_IVsTextStorageColorState,0x1F027F1F,0x9696,0x4816,0xB3,0x45,0x3C,0xD7,0xD3,0x12,0x2A,0x48);


MIDL_DEFINE_GUID(IID, IID_IVsFinalTextChangeCommitEvents,0xCE62717C,0x797D,0x445F,0xBC,0x89,0x1D,0x02,0xC5,0x4C,0xCF,0x96);


MIDL_DEFINE_GUID(IID, IID_IVsPreliminaryTextChangeCommitEvents,0x7F57B996,0x148B,0x46DE,0xA2,0x61,0xB1,0xA0,0x2E,0x6D,0x9D,0xBA);


MIDL_DEFINE_GUID(IID, IID_IVsUndoRedoClusterWithCommitEvents,0xF98298D9,0x53C4,0x43DB,0x90,0xD6,0xD1,0xA3,0xCA,0x4B,0x18,0x49);


MIDL_DEFINE_GUID(IID, IID_IVsTextImageEvents,0xB1ADB4FC,0x562F,0x43E6,0x8A,0x91,0xCD,0x2C,0xFF,0xA2,0xB3,0x77);


MIDL_DEFINE_GUID(IID, IID_IVsCommitGestureSink,0x957970B0,0x71E1,0x11d3,0xAF,0xF1,0x00,0x10,0x5A,0x99,0x91,0xEF);


MIDL_DEFINE_GUID(IID, IID_IVsTextImage,0x67068DC0,0xC069,0x11d2,0x93,0x6C,0xD7,0x14,0x76,0x6E,0x8B,0x50);


MIDL_DEFINE_GUID(IID, IID_IVsEditorGoBackLocations,0x714FFF37,0x5CDC,0x424a,0xBC,0xB4,0xCA,0x50,0x80,0x05,0x24,0xF1);


MIDL_DEFINE_GUID(IID, IID_IVsTextReplaceEvents,0xCF9928D9,0x65AE,0x4319,0xA4,0x46,0x94,0xED,0x5C,0x45,0xEC,0xDE);


MIDL_DEFINE_GUID(IID, IID_IVsFormatFilterProvider,0x181237A7,0x4861,0x4D6C,0x8C,0xA1,0x8A,0x00,0x4B,0xEA,0x2E,0x8E);


MIDL_DEFINE_GUID(IID, IID_IVsNavigableLocationResolver,0x82D04B51,0x1626,0x43AA,0xB5,0x7F,0x9B,0x23,0xD4,0x28,0x03,0x33);


MIDL_DEFINE_GUID(IID, IID_IVsLanguageTextOps,0x518020A6,0x8D59,0x4C80,0x9A,0xAE,0x01,0x5A,0xB9,0xDC,0xC3,0xDE);


MIDL_DEFINE_GUID(IID, IID_IVsLanguageClipboardOps,0x2ED7B280,0xB372,0x415E,0x86,0x2D,0xD7,0xD9,0xAE,0xAF,0xCD,0x10);


MIDL_DEFINE_GUID(IID, IID_IVsQueryLineChangeCommit,0x72E67329,0x8765,0x4586,0x8B,0x15,0x0B,0x44,0x5E,0x6F,0x3B,0x57);


MIDL_DEFINE_GUID(IID, IID_IVsCodeWindowEvents,0x26ACC7FD,0xC665,0x426B,0xB1,0x20,0xE9,0x67,0x62,0xC5,0xDD,0x1A);


MIDL_DEFINE_GUID(IID, IID_IVsFileBackup,0x7B32BDF9,0x89D3,0x4574,0xB6,0xAC,0xF2,0xEE,0xE9,0xDE,0xAB,0x18);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/
