#include <spbase.h>
#include <ssl2msg.h>
#include <ssl3msg.h>
#include <ssl2prot.h>
#include <md5.h>
#include <sha.h>
#include <rsa.h>



DWORD vcbPrivKey = 748;
DWORD vcbCert = 593;

	UCHAR vrgbCert[] = {
 0x30, 0x82, 0x02, 0x4d, 0x30, 0x82, 0x01, 0xba, 0x02, 0x05, 0x02, 0x72, 0x00, 0x06, 0xf9, 0x30, 
 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x02, 0x05, 0x00, 0x30, 0x5f, 
 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x20, 0x30, 
 0x1e, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x17, 0x52, 0x53, 0x41, 0x20, 0x44, 0x61, 0x74, 0x61, 
 0x20, 0x53, 0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x2c, 0x20, 0x49, 0x6e, 0x63, 0x2e, 0x31, 
 0x2e, 0x30, 0x2c, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x13, 0x25, 0x53, 0x65, 0x63, 0x75, 0x72, 0x65, 
 0x20, 0x53, 0x65, 0x72, 0x76, 0x65, 0x72, 0x20, 0x43, 0x65, 0x72, 0x74, 0x69, 0x66, 0x69, 0x63, 
 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x41, 0x75, 0x74, 0x68, 0x6f, 0x72, 0x69, 0x74, 0x79, 0x30, 
 0x1e, 0x17, 0x0d, 0x39, 0x36, 0x30, 0x32, 0x31, 0x32, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x5a, 
 0x17, 0x0d, 0x39, 0x36, 0x30, 0x38, 0x31, 0x33, 0x32, 0x33, 0x35, 0x39, 0x35, 0x39, 0x5a, 0x30, 
 0x7f, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x12, 
 0x30, 0x10, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x09, 0x57, 0x61, 0x68, 0x69, 0x6e, 0x67, 0x74, 
 0x6f, 0x6e, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x13, 0x07, 0x52, 0x65, 0x64, 
 0x6d, 0x6f, 0x6e, 0x64, 0x31, 0x1e, 0x30, 0x1c, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x15, 0x4d, 
 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x43, 0x6f, 0x72, 0x70, 0x6f, 0x72, 0x61, 
 0x74, 0x69, 0x6f, 0x6e, 0x31, 0x0e, 0x30, 0x0c, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x13, 0x05, 0x42, 
 0x4c, 0x44, 0x31, 0x30, 0x31, 0x1a, 0x30, 0x18, 0x06, 0x03, 0x55, 0x04, 0x03, 0x14, 0x11, 0x70, 
 0x63, 0x74, 0x2e, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x2e, 0x63, 0x6f, 0x6d, 
 0x30, 0x81, 0x9f, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 
 0x05, 0x00, 0x03, 0x81, 0x8d, 0x00, 0x30, 0x81, 0x89, 0x02, 0x81, 0x81, 0x00, 0x83, 0x0c, 0xfe, 
 0x5c, 0x37, 0xd2, 0xc2, 0x0d, 0x3b, 0xa1, 0xee, 0xdb, 0xe8, 0x51, 0xca, 0xb4, 0x15, 0x54, 0x42, 
 0xdb, 0xc4, 0x2f, 0xd0, 0x29, 0xf7, 0x08, 0x1a, 0xb0, 0x0c, 0x00, 0x43, 0xa6, 0x5c, 0x67, 0x77, 
 0x5d, 0xc1, 0x9b, 0x3f, 0x43, 0xd9, 0x9a, 0x09, 0x4f, 0xa1, 0xa0, 0x19, 0xc9, 0xba, 0xac, 0x03, 
 0xf8, 0xa9, 0x82, 0x11, 0x6b, 0xe2, 0x92, 0x7f, 0x56, 0x2b, 0x2f, 0x62, 0xa5, 0xae, 0x09, 0x93, 
 0xc9, 0xd4, 0xc4, 0x66, 0x68, 0xbd, 0x5c, 0x1e, 0xdf, 0x41, 0xb1, 0xfd, 0x55, 0x58, 0x25, 0xad, 
 0x8f, 0x31, 0xe9, 0x32, 0xfd, 0x8f, 0x30, 0x8f, 0x8e, 0x9b, 0x60, 0x8c, 0xe6, 0xac, 0xc7, 0x6c, 
 0xb7, 0x1b, 0x6d, 0x4f, 0xd9, 0x31, 0x98, 0xd8, 0x8c, 0xf8, 0xb2, 0xe6, 0x2b, 0x64, 0x86, 0x93, 
 0xe7, 0xd3, 0xd5, 0x53, 0xa2, 0x21, 0xad, 0xd4, 0xca, 0x76, 0xca, 0x6b, 0x27, 0x02, 0x03, 0x01, 
 0x00, 0x01, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x02, 0x05, 
 0x00, 0x03, 0x7e, 0x00, 0x5f, 0x08, 0xa2, 0x1e, 0xb4, 0x14, 0x05, 0xa3, 0xb8, 0x51, 0xd1, 0xa1, 
 0xe9, 0x13, 0xe7, 0x2a, 0x8c, 0x88, 0x90, 0xf9, 0x6c, 0x53, 0x37, 0xdf, 0xcf, 0x2f, 0x30, 0x8f, 
 0x7c, 0x35, 0x0c, 0x3a, 0x12, 0x99, 0xa9, 0x60, 0x87, 0xed, 0xe2, 0x1b, 0xf3, 0xa5, 0xa8, 0x5a, 
 0xf5, 0xd0, 0x62, 0xfd, 0x9f, 0xdc, 0x9c, 0xdb, 0x8b, 0x9b, 0xcd, 0x15, 0xf5, 0x14, 0xaf, 0xfb, 
 0xfc, 0x7a, 0x1e, 0x5d, 0x7c, 0xa5, 0x06, 0x43, 0xa9, 0xf8, 0xe2, 0xd0, 0x02, 0x95, 0xd8, 0x38, 
 0xd2, 0xfa, 0x86, 0xfe, 0x7f, 0x3e, 0x7d, 0x86, 0x5a, 0xc5, 0xda, 0xd4, 0xe8, 0x11, 0xe8, 0xf7, 
 0x57, 0xf5, 0x82, 0x48, 0x6c, 0x75, 0x82, 0x57, 0xd8, 0x01, 0x6b, 0xd2, 0x22, 0x9f, 0xc7, 0x25, 
 0x57, 0x49, 0xe2, 0xfc, 0xac, 0xb0, 0x68, 0xea, 0x29, 0xd2, 0xb6, 0xa3, 0x7f, 0x94, 0x1d, 0x2f, 
 0x71
 } ;
UCHAR vrgbPrivKey[] = 
	{

 0x52, 0x53, 0x41, 0x32, 0x88, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 
 0x01, 0x00, 0x01, 0x00, 0x27, 0x6b, 0xca, 0x76, 0xca, 0xd4, 0xad, 0x21, 0xa2, 0x53, 0xd5, 0xd3, 
 0xe7, 0x93, 0x86, 0x64, 0x2b, 0xe6, 0xb2, 0xf8, 0x8c, 0xd8, 0x98, 0x31, 0xd9, 0x4f, 0x6d, 0x1b, 
 0xb7, 0x6c, 0xc7, 0xac, 0xe6, 0x8c, 0x60, 0x9b, 0x8e, 0x8f, 0x30, 0x8f, 0xfd, 0x32, 0xe9, 0x31, 
 0x8f, 0xad, 0x25, 0x58, 0x55, 0xfd, 0xb1, 0x41, 0xdf, 0x1e, 0x5c, 0xbd, 0x68, 0x66, 0xc4, 0xd4, 
 0xc9, 0x93, 0x09, 0xae, 0xa5, 0x62, 0x2f, 0x2b, 0x56, 0x7f, 0x92, 0xe2, 0x6b, 0x11, 0x82, 0xa9, 
 0xf8, 0x03, 0xac, 0xba, 0xc9, 0x19, 0xa0, 0xa1, 0x4f, 0x09, 0x9a, 0xd9, 0x43, 0x3f, 0x9b, 0xc1, 
 0x5d, 0x77, 0x67, 0x5c, 0xa6, 0x43, 0x00, 0x0c, 0xb0, 0x1a, 0x08, 0xf7, 0x29, 0xd0, 0x2f, 0xc4, 
 0xdb, 0x42, 0x54, 0x15, 0xb4, 0xca, 0x51, 0xe8, 0xdb, 0xee, 0xa1, 0x3b, 0x0d, 0xc2, 0xd2, 0x37, 
 0x5c, 0xfe, 0x0c, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1d, 0xe2, 0xba, 0xbd, 
 0xc4, 0x03, 0xc0, 0xa6, 0x7e, 0x05, 0x6a, 0x77, 0x61, 0x1a, 0x43, 0xb1, 0xf1, 0xfb, 0xde, 0xc0, 
 0xad, 0x28, 0x2e, 0x7f, 0xf5, 0xe8, 0x63, 0xcd, 0x2e, 0x01, 0xbc, 0x4b, 0x2f, 0x90, 0x7d, 0x82, 
 0x8f, 0xc7, 0x7a, 0xa9, 0x8a, 0x5f, 0xc6, 0x9d, 0x46, 0xb2, 0xbd, 0xf4, 0x21, 0x89, 0x50, 0x9f, 
 0xa8, 0x05, 0x1a, 0x0f, 0xdf, 0x63, 0xc6, 0x76, 0xc6, 0x4d, 0xa6, 0xef, 0x00, 0x00, 0x00, 0x00, 
 0x13, 0xbf, 0x98, 0xda, 0x6b, 0x6e, 0x23, 0xc4, 0x86, 0xf2, 0x50, 0x94, 0x94, 0x86, 0x6a, 0x0d, 
 0x69, 0x88, 0x50, 0x83, 0x0b, 0x4b, 0xb9, 0x9c, 0x3f, 0x26, 0x9f, 0x4f, 0x8f, 0x0a, 0x2c, 0x08, 
 0xd8, 0x1c, 0x8b, 0x10, 0xb8, 0x58, 0x49, 0x5b, 0x01, 0xe1, 0xfe, 0xa9, 0xfd, 0x4b, 0x03, 0x36, 
 0x9d, 0x32, 0x4e, 0x04, 0xa4, 0xad, 0x80, 0xf2, 0x71, 0x00, 0xbb, 0xb5, 0xb3, 0xe9, 0xfd, 0x8b, 
 0x00, 0x00, 0x00, 0x00, 0x09, 0x6c, 0x3d, 0x4b, 0xa2, 0x7b, 0x63, 0x6c, 0x1f, 0xe5, 0xa4, 0x12, 
 0x48, 0x7a, 0x2a, 0xb0, 0x01, 0xd0, 0x2c, 0xc7, 0x15, 0x9c, 0x1d, 0x9c, 0x8a, 0x43, 0x1e, 0x30, 
 0xa1, 0x26, 0xa1, 0x08, 0x2a, 0xf3, 0xcc, 0xa3, 0x5d, 0xd9, 0xae, 0x5f, 0x16, 0x78, 0x97, 0x23, 
 0x3b, 0xe0, 0x01, 0x9c, 0x0d, 0xfa, 0xb9, 0xe1, 0xd3, 0x64, 0xa1, 0x90, 0x4a, 0x18, 0x23, 0xc3, 
 0xed, 0x81, 0xd2, 0x60, 0x00, 0x00, 0x00, 0x00, 0x81, 0x96, 0x14, 0xf0, 0xb5, 0x88, 0xfc, 0xec, 
 0x05, 0xc5, 0x1b, 0xfb, 0x3b, 0xf6, 0x63, 0xc1, 0xf4, 0x26, 0xdd, 0x30, 0xc5, 0xee, 0xfc, 0x74, 
 0x4c, 0x35, 0xfb, 0xff, 0x03, 0xf1, 0xfe, 0xc9, 0x1b, 0x47, 0x99, 0x91, 0xaf, 0x5a, 0x44, 0x42, 
 0xa9, 0x81, 0x50, 0x91, 0x83, 0x8b, 0x1a, 0x35, 0xaa, 0x03, 0x10, 0xb1, 0x92, 0xdd, 0x63, 0x84, 
 0xfb, 0xc4, 0xef, 0x84, 0xd9, 0xff, 0x2d, 0x35, 0x00, 0x00, 0x00, 0x00, 0xcf, 0x2b, 0xf7, 0x27, 
 0x13, 0x99, 0xea, 0x1e, 0xe7, 0x45, 0xf3, 0x0e, 0x62, 0xd4, 0xff, 0x09, 0x16, 0x7b, 0xf2, 0x2a, 
 0xfb, 0x36, 0xc0, 0x78, 0x11, 0x94, 0x95, 0x90, 0xac, 0xda, 0x42, 0x3b, 0x61, 0xee, 0xf7, 0xaf, 
 0xef, 0x19, 0x6b, 0xee, 0xb9, 0xc5, 0x38, 0x9e, 0x3c, 0x21, 0x80, 0xb8, 0x6b, 0x88, 0xac, 0x01, 
 0x36, 0xb6, 0xda, 0x1e, 0xce, 0x26, 0x82, 0x9d, 0x2c, 0x4f, 0xa7, 0xa1, 0x00, 0x00, 0x00, 0x00, 
 0xa9, 0x3f, 0x66, 0x02, 0x0c, 0x8b, 0xe8, 0x85, 0x76, 0x3b, 0x9f, 0x9b, 0xd2, 0x51, 0x34, 0x3e, 
 0xf5, 0x47, 0x36, 0x6f, 0x5e, 0x5a, 0x22, 0xa4, 0x48, 0x3f, 0x9d, 0xa8, 0xdb, 0xf0, 0xbe, 0x86, 
 0xdd, 0xf8, 0x1c, 0x89, 0x54, 0x44, 0xe6, 0xff, 0x06, 0xe2, 0x29, 0xd4, 0xd5, 0x1d, 0x82, 0xa0, 
 0x6a, 0x7b, 0x13, 0xad, 0x21, 0x8b, 0x37, 0xf6, 0xbf, 0x40, 0xab, 0x44, 0xb0, 0xc8, 0x4c, 0x57, 
 0xcf, 0x93, 0x42, 0xba, 0x8d, 0x17, 0xb5, 0x6a, 0xcb, 0x8f, 0x07, 0x9f, 0x1b, 0x07, 0xbb, 0x7d, 
 0xb7, 0xac, 0x0d, 0xad, 0x36, 0x8b, 0xa4, 0x79, 0x9c, 0x4d, 0x4b, 0x6e, 0xc9, 0xb8, 0x76, 0x01, 
 0x20, 0xaa, 0x92, 0x03, 0x63, 0x1d, 0x68, 0xbe, 0x5e, 0x0f, 0x35, 0xd5, 0x60, 0xf6, 0x70, 0xa0, 
 0x70, 0x8d, 0xbb, 0xd4, 0x1f, 0x71, 0xc5, 0x27, 0x4b, 0xd6, 0xd6, 0xae, 0x85, 0x92, 0xc6, 0x50, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
 0x00, 0x00, 0x00, 0x00, 0xab, 0xab, 0xab, 0xab, 0xab, 0xab, 0xab, 0xab 
 } ;

static VOID
ReverseMemCopy(
    PUCHAR      Dest,
    PUCHAR      Source,
    ULONG       Size)
{
    PUCHAR  p;

    p = Dest + Size - 1;
    do
    {
	*p-- = *Source++;
    } while (p >= Dest);
}


BOOL FSignCertVerify(PBYTE rgbHash, PBYTE pbSigned, DWORD *pdwcbSigned)
	{
    INT   iBlockLen;
    INT   iPadLen;
    BYTE  pbInputBlock[ENCRYPTED_KEY_SIZE];
    BYTE  pbOutputBlock[ENCRYPTED_KEY_SIZE];



    // Build signature block (in network order)
    iBlockLen = 0x80;  //MONDO KLUDGE:::
    iPadLen = iBlockLen - MD5DIGESTLEN - A_SHA_DIGEST_LEN - 3;
    pbOutputBlock[0] = 0;
    pbOutputBlock[1] = 1;
    FillMemory(pbOutputBlock + 2, iPadLen, 0xff);
    pbOutputBlock[iPadLen + 2] = 0;
    CopyMemory(pbOutputBlock + iPadLen + 3, rgbHash, 
    			MD5DIGESTLEN + A_SHA_DIGEST_LEN);


    // Convert signature block to little endian (so BSAFE is happy)
    FillMemory(pbInputBlock, ENCRYPTED_KEY_SIZE, 0);
    ReverseMemCopy(pbInputBlock, pbOutputBlock, iBlockLen);

    // Encrypt (aka "sign") signature block with (large) private key
    if(!BSafeDecPrivate((LPBSAFE_PRV_KEY)vrgbPrivKey,
			pbInputBlock,
			pbOutputBlock)) 
	{
		return FALSE;
    }


    // Store signature block to message, converting it back to network order
    ReverseMemCopy(pbSigned, pbOutputBlock, iBlockLen);
    *pdwcbSigned = iBlockLen;

	return(TRUE);
	}



BOOL FindClientAuthCertsByIssuer
(
PBYTE pb, 
DWORD dwcbIssuerName, 
PBYTE pbCert, 
DWORD *pdwcbCert
)
	{
	if(*pdwcbCert < vcbCert)
		return(FALSE);
	*pdwcbCert = vcbCert;
	CopyMemory(pbCert, vrgbCert, sizeof(vrgbCert));
	return(TRUE);
	}

#ifdef EXPORT
Initialize(
    PctPrivateKey *pPrivate;
    PctPublicKey  *pPublic;


    BitsCopy = Bits;
    BSafeComputeKeySizes( &dwPublicSize, &dwPrivateSize, &BitsCopy );

    pPrivate = SPExternalAlloc( dwPrivateSize + sizeof(PctPrivateKey));
    pPublic = SPExternalAlloc(  dwPublicSize + sizeof(PctPublicKey));

    if (!pPrivate || !pPublic)
    {
        if (pPrivate)
        {
            SPExternalFree( pPrivate );
        }

        if (pPublic)
        {
            SPExternalFree( pPublic );
        }

        return( FALSE );
    }

    pPublic->cbKey = dwPublicSize;
    pPrivate->cbKey = dwPrivateSize;
    if (!BSafeMakeKeyPair((BSAFE_PUB_KEY *)pPublic->pKey, (BSAFE_PRV_KEY *)pPrivate->pKey, Bits ) )
    {
        SPExternalFree( pPrivate );
        SPExternalFree( pPublic );
        return( FALSE );
    }
#endif