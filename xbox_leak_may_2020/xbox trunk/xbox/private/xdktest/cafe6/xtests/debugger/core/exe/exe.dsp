# Microsoft Developer Studio Project File - Name="exe" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 60000
# ** �ҏW���Ȃ��ł������� **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=exe - Win32 Release
!MESSAGE ����͗L����Ҳ�̧�قł͂���܂���B ������ۼު�Ă�����ނ��邽�߂ɂ� NMAKE ���g�p���Ă��������B
!MESSAGE [Ҳ�̧�ق̴���߰�] ����ނ��g�p���Ď��s���Ă�������
!MESSAGE 
!MESSAGE NMAKE /f "exe.mak".
!MESSAGE 
!MESSAGE NMAKE �̎��s���ɍ\�����w��ł��܂�
!MESSAGE ����� ײݏ��ϸۂ̐ݒ���`���܂��B��:
!MESSAGE 
!MESSAGE NMAKE /f "exe.mak" CFG="exe - Win32 Release"
!MESSAGE 
!MESSAGE �I���\������� Ӱ��:
!MESSAGE 
!MESSAGE "exe - Win32 Release" ("Win32 (x86) Dynamic-Link Library" �p)
!MESSAGE "exe - Win32 Debug" ("Win32 (x86) Dynamic-Link Library" �p)
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "exe - Win32 Release"

# PROP BASE Use_MFC 2
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir ".\Release"
# PROP BASE Intermediate_Dir ".\Release"
# PROP BASE Target_Dir "."
# PROP Use_MFC 2
# PROP Use_Debug_Libraries 0
# PROP Output_Dir ".\Release"
# PROP Intermediate_Dir ".\Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir "."
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_WINDLL" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /c
# ADD CPP /nologo /MD /W3 /WX /GX /O2 /I "..\..\..\..\include" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 /nologo /subsystem:windows /dll /machine:I386 /out:"..\..\bin\core\Execution.dll" /libpath:"..\..\..\..\lib"

!ELSEIF  "$(CFG)" == "exe - Win32 Debug"

# PROP BASE Use_MFC 2
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir ".\Debug"
# PROP BASE Intermediate_Dir ".\Debug"
# PROP BASE Target_Dir "."
# PROP Use_MFC 2
# PROP Use_Debug_Libraries 1
# PROP Output_Dir ".\Debug"
# PROP Intermediate_Dir ".\Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir "."
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_WINDLL" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /c
# ADD CPP /nologo /MDd /W3 /WX /Gm /GX /ZI /Od /I "..\..\..\..\include" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "_DEBUG" /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /dll /debug /machine:I386
# ADD LINK32 /nologo /subsystem:windows /dll /pdb:"..\..\bin\core\exed.pdb" /debug /machine:I386 /out:"..\..\bin\core\exed.dll" /libpath:"..\..\..\..\lib"
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "exe - Win32 Release"
# Name "exe - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;hpj;bat;for;f90"
# Begin Source File

SOURCE=..\..\dbgtestbase.cpp
# End Source File
# Begin Source File

SOURCE=.\exe_base.cpp
# End Source File
# Begin Source File

SOURCE=.\exe_bp.cpp
# End Source File
# Begin Source File

SOURCE=.\exe_dlls.cpp
# End Source File
# Begin Source File

SOURCE=.\exe_spec.cpp
# End Source File
# Begin Source File

SOURCE=.\execase3.cpp
# End Source File
# Begin Source File

SOURCE=.\exesub.cpp
# End Source File
# Begin Source File

SOURCE=.\stdafx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl;fi;fd"
# Begin Source File

SOURCE=..\..\bin\Core\src\dbg\chain1.h
# End Source File
# Begin Source File

SOURCE=..\..\bin\Core\src\dbg\chain2.h
# End Source File
# Begin Source File

SOURCE=..\..\bin\Core\src\dbg\chain3.h
# End Source File
# Begin Source File

SOURCE=..\..\bin\Core\src\dbg\chain4.h
# End Source File
# Begin Source File

SOURCE=..\..\bin\Core\src\dbg\cxx.h
# End Source File
# Begin Source File

SOURCE=..\..\DbgTestBase.h
# End Source File
# Begin Source File

SOURCE=.\exe_base.h
# End Source File
# Begin Source File

SOURCE=.\exe_bp.h
# End Source File
# Begin Source File

SOURCE=.\exe_spec.h
# End Source File
# Begin Source File

SOURCE=.\execase.h
# End Source File
# Begin Source File

SOURCE=.\execase2.h
# End Source File
# Begin Source File

SOURCE=.\execase3.h
# End Source File
# Begin Source File

SOURCE=.\exesub.h
# End Source File
# Begin Source File

SOURCE=..\..\bin\Core\src\dbg\foo.h
# End Source File
# Begin Source File

SOURCE=..\..\bin\Core\src\dbg\foo0x.h
# End Source File
# Begin Source File

SOURCE=..\..\bin\Core\src\dbg\foox.h
# End Source File
# Begin Source File

SOURCE=.\stdafx.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;cnt;rtf;gif;jpg;jpeg;jpe"
# End Group
# Begin Group "target sources"

# PROP Default_Filter ""
# Begin Group "testgo01"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\bin\Core\src\testgo01\testg.h
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=..\..\bin\Core\src\testgo01\testgo.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=..\..\bin\Core\src\testgo01\testgo01.mak
# PROP Exclude_From_Build 1
# End Source File
# End Group
# Begin Group "dbg"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\..\bin\core\src\dbg\chain0.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=..\..\bin\core\src\dbg\chain1.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=..\..\bin\core\src\dbg\chain2.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=..\..\bin\core\src\dbg\chain3.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=..\..\bin\core\src\dbg\chain4.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=..\..\bin\core\src\dbg\cxx.cxx
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=..\..\bin\Core\src\dbg\dbg.mak
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=..\..\bin\core\src\dbg\eh.cpp
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=..\..\bin\core\src\dbg\foo0x.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=..\..\bin\core\src\dbg\foox.c
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=..\..\bin\core\src\dbg\main.c
# PROP Exclude_From_Build 1
# End Source File
# End Group
# Begin Group "execution pri1"

# PROP Default_Filter ""
# Begin Source File

SOURCE="..\..\bin\core\src\execution pri1\execution pri1 exe.cpp"
# PROP Exclude_From_Build 1
# End Source File
# End Group
# End Group
# End Target
# End Project
