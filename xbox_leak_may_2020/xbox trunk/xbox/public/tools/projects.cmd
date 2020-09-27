@echo off
if not "%_echo%" == "" echo on
if not "%verbose%"=="" echo on

REM ---------------------------------------------------------------------------
REM   PROJECTS.CMD
REM
REM By adding your project to this file, anyone will be able to do "ntenlist
REM <your project name>" to automatically enlist in the correct location in
REM the tree. "project" is the name of the project. "slm_root" is the server
REM where it exists. "proj_path" is where the project lives in the source tree.
REM
REM Don't forget to update the graphical tree at the bottom of this file.
REM
REM Finally, you might also want to create an alias so users will be able to
REM jump right to your project w/o typing the full path. See
REM \nt\private\developr\ntcue.pub. The only caveat, don't use an alias that
REM is also the name of some utility.
REM
REM ---------------------------------------------------------------------------

set project=
set slm_root=
set proj_path=
goto %1 2>nul

:ntos
           set project=ntos&      set slm_root=\\CPITGCFS01\XBOX&       set proj_path=%_ntroot%\private\ntos
goto end
:private
           set project=private&   set slm_root=\\CPITGCFS01\XBOX&       set proj_path=%_ntroot%\private
goto end
:public
           set project=public&    set slm_root=\\CPITGCFS01\XBOX&       set proj_path=%_ntroot%\public
goto end
:sdk
           set project=SDK&       set slm_root=\\CPITGCFS01\XBOX&       set proj_path=%_ntroot%\Private\SDK
goto end
:sdktools
           set project=sdktools&  set slm_root=\\CPITGCFS01\XBOX&       set proj_path=%_ntroot%\private\sdktools
goto end
:usb
           set project=usb&       set slm_root=\\CPITGCFS01\XBOX&       set proj_path=%_ntroot%\private\ntos\dd\wdm\usb
goto end
:test
           set project=test&      set slm_root=\\CPITGCFS01\XBOX&       set proj_path=%_ntroot%\private\test
goto end
:ui
           set project=ui&        set slm_root=\\CPITGCFS01\XBOX&       set proj_path=%_ntroot%\private\ui
goto end
:directx
           set project=directx&   set slm_root=\\CPITGCFS01\XBOX&       set proj_path=%_ntroot%\private\windows\directx
goto end
:win2000
           set project=win2000&   set slm_root=\\CPITGCFS01\XBOX&       set proj_path=%_ntroot%\private\win2000
goto end
:atg
           set project=atg&       set slm_root=\\CPITGCFS01\XBOX&       set proj_path=%_ntroot%\private\atg
goto end
:xdktest
           set project=xdktest&   set slm_root=\\CPITGCFS01\XBOX&       set proj_path=%_ntroot%\private\xdktest
goto end

����bldrules
����bldrules
����private
�   ����amovie
�   �   ����filters.ks (ksuser)
�   ����asn1
�   ����atg
�   ����basestor
�   ����bpc
�   �   ����bda
�   �   ����bpccomm
�   �   ����bpcui
�   �   ����ca
�   �   ����common
�   �   ����ds
�   �   ����epgldr
�   �   ����filters
�   �   ����quartz
�   �   ����vbi
�   �   ����vidsvr
�   ����ca
�   ����cluster
�   ����ddk
�   ����dfs.ds
�   ����ds
�   ����dsmigrat
�   ����dsui
�   ����eventlog
�   ����eventsystem
�   ����fax
�   ����imaging2
�   ����inet
�   �   ����athena
�   �   ����controls
�   �   ����digest
�   �   ����icw
�   �   ����iis
�   �   ����iisrearc
�   �   ����mshtml
�   �   ����netmtng
�   �   ����setup (iesetup)
�   �   ����urlmon
�   �   ����vml
�   �   ����wininet
�   �   ����xml
�   ����infosoft
�   ����intlwb
�   ����ispu
�   ����mapistub
�   ����mobile
�   ����mvdm
�   ����msagent
�   ����net
�   �   ����routing
�   �   ����sfm
�   �   ����sockets
�   �   ����ui
�   �       ����nwc
�   ����nlgwb
�   ����ntos
�   �   ����arcinst
�   �   ����dd
�   �   �   ����sound
�   �   �   �   ����creative
�   �   �   ����wdm
�   �   �       ����capture
�   �   �       �   ����atiwdm
�   �   �       ����dvd
�   �   �       ����input
�   �   �       ����usb
�   �   �       ����1394
�   �   ����ks
�   �   ����miniport
�   �   �   ����adaptec
�   �   �   ����flashpnt
�   �   �   ����slcd
�   �   �   ����symbios
�   �   ����ndis
�   �   �   ����netoem
�   �   �   ����npfddi
�   �   �   ����testprot
�   �   ����rdr2
�   �   �   ����mfiomi
�   �   ����streams
�   �   ����w32
�   �   �   ����cslpk
�   �   �   ����ntcon
�   �   �   ����ntgdi
�   �   �   �   ����mstypeo
�   �   �   �   ����printers
�   �   �   �       ����rasprint
�   �   �   �           ����mini
�   �   �   ����ntuser
�   �   ����wow64
�   ����ntrk
�   ����nw
�   ����oleds
�   ����ole2ui32
�   ����ole32
�   ����oleutest
�   ����os2
�   ����pnpu
�   ����posix
�   ����printer5
�   �   ����oemdrv
�   �       ����broth
�   �       �   ����hbp
�   �       ����canon
�   �       ����epson
�   �       ����hp
�   �       �   ����hpclj
�   �       �   ����hplj5si
�   �       �   ����hpmini
�   �       ����lexmk
�   �       ����xerox
�   �           ����nseries
�   ����query
�   ����redist
�   �   ����msagent
�   ����remoteboot
�   ����rpc
�   ����samples
�   ����sdktools
�   �   ����vctools
�   ����security
�   ����tapi
�   ����unimodem
�   ����utils
�   ����win2000
�   ����windbg64
�   ����windows
�   �    ����base
�   �    ����cmd
�   �    ����danim
�   �    ����directx
�   �    ����ep
�   �    ����media
�   �    �   ����drivers
�   �    �       ����creatdll
�   �    ����ole
�   �    ����opengl
�   �    ����reality
�   �    ����sam
�   �    ����setup
�   �    ����shell
�   �    ����spooler
�   �    �   ����monitors
�   �    �       ����hpmon
�   �    ����tshoot
�   �    ����tts
�   �    ����win4help
�   �    ����winnls
�   �    ����wmi
�   ����wx86
�   ����xdktest
����public
�   ����spec
����test
����ui
����nttest
    ����basetest
    ����basetool
    ����guitest
    
:end
