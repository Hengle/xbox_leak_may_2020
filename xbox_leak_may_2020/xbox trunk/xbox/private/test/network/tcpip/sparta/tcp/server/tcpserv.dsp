# Microsoft Developer Studio Project File - Name="tcpserv" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) External Target" 0x0106

CFG=tcpserv - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "tcpserv.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "tcpserv.mak" CFG="tcpserv - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "tcpserv - Win32 Release" (based on "Win32 (x86) External Target")
!MESSAGE "tcpserv - Win32 Debug" (based on "Win32 (x86) External Target")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""

!IF  "$(CFG)" == "tcpserv - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Cmd_Line "NMAKE /f tcpserv.mak"
# PROP BASE Rebuild_Opt "/a"
# PROP BASE Target_File "tcpserv.exe"
# PROP BASE Bsc_Name "tcpserv.bsc"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Cmd_Line "echo build -z | %SystemRoot%\system32\Cmd.exe /K c:\xbox\private\developr\tristanj\myrazzle.cmd pushd c:\xbox\private\test\network\tcpip\sparta\tcp\server"
# PROP Rebuild_Opt "/a"
# PROP Target_File "tcpserv.exe"
# PROP Bsc_Name "tcpserv.bsc"
# PROP Target_Dir ""

!ELSEIF  "$(CFG)" == "tcpserv - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Cmd_Line "NMAKE /f tcpserv.mak"
# PROP BASE Rebuild_Opt "/a"
# PROP BASE Target_File "tcpserv.exe"
# PROP BASE Bsc_Name "tcpserv.bsc"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Cmd_Line "echo build -z | %SystemRoot%\system32\Cmd.exe /K c:\xbox\private\developr\tristanj\myrazzle.cmd pushd c:\xbox\private\test\network\tcpip\sparta\tcp\server"
# PROP Rebuild_Opt "/a"
# PROP Target_File "tcpserv.exe"
# PROP Bsc_Name ""
# PROP Target_Dir ""

!ENDIF 

# Begin Target

# Name "tcpserv - Win32 Release"
# Name "tcpserv - Win32 Debug"

!IF  "$(CFG)" == "tcpserv - Win32 Release"

!ELSEIF  "$(CFG)" == "tcpserv - Win32 Debug"

!ENDIF 

# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\tcpserv.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=..\inc\tcpmsg.h
# End Source File
# Begin Source File

SOURCE=.\tcpserv.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# End Target
# End Project