/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 3.01.75 */
/* at Wed Aug 13 21:04:17 1997
 */
/* Compiler settings for AgentServer.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


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

const IID IID_IAgentUserInput = {0xA7B93C80,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentCommand = {0xA7B93C83,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentCommands = {0xA7B93C85,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentCommandWindow = {0x6D0ECB23,0x9968,0x11D0,{0xAC,0x6E,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentSpeechInputProperties = {0xA7B93C87,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentAudioOutputProperties = {0xA7B93C89,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentPropertySheet = {0xA7B93C8B,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentBalloon = {0xA7B93C8D,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentCharacter = {0xA7B93C8F,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgent = {0xA7B93C91,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentNotifySink = {0x00D18159,0x8466,0x11D0,{0xAC,0x63,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID IID_IAgentPrivateNotifySink = {0xB741B760,0x8EA6,0x11d0,{0xAC,0x6A,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const IID LIBID_AgentServerObjects = {0xA7B93C73,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


const CLSID CLSID_AgentServer = {0xA7B93C92,0x7B81,0x11D0,{0xAC,0x5F,0x00,0xC0,0x4F,0xD9,0x75,0x75}};


#ifdef __cplusplus
}
#endif
