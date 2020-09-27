// stdafx.h : �W���̃V�X�e�� �C���N���[�h �t�@�C���A
//            �܂��͎Q�Ɖ񐔂������A�����܂�ύX����Ȃ�
//            �v���W�F�N�g��p�̃C���N���[�h �t�@�C�����L�q���܂��B
//

#if !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
#define $$FILE_NAME_SYMBOL$$_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Windows �w�b�_�[����w�ǎg�p����Ȃ��X�^�b�t�����O���܂��B

#include <afxwin.h>         // MFC �̃R�A����ѕW���R���|�[�l���g
#include <afxext.h>         // MFC �̊g������
$$IF(CTreeView || CListView || PROJTYPE_EXPLORER)
#include <afxcview.h>
$$ENDIF //CTreeView || CListView
$$IF(PROJTYPE_DLL)

#ifndef _AFX_NO_OLE_SUPPORT
$$ENDIF //PROJTYPE_DLL
$$IF(CONTAINER || MINI_SERVER || FULL_SERVER || CONTAINER_SERVER || PROJTYPE_DLL)
#include <afxole.h>         // MFC �� OLE �N���X
$$IF(CONTAINER || CONTAINER_SERVER || PROJTYPE_DLL)
#include <afxodlgs.h>       // MFC �� OLE �_�C�A���O �N���X
$$ENDIF
$$ENDIF
$$IF(AUTOMATION || PROJTYPE_DLL || OLECTL)
#include <afxdisp.h>        // MFC �̃I�[�g���[�V���� �N���X
$$ENDIF
$$IF(ACTIVE_DOC_SERVER)
#include <afxdocob.h>
$$ENDIF
$$IF(PROJTYPE_DLL)
#endif // _AFX_NO_OLE_SUPPORT

$$ENDIF //PROJTYPE_DLL
$$// �f�[�^�x�[�X �w�b�_�[���C���N���[�h���܂��B �f�[�^�x�[�X �w�b�_�[���C���N���[�h���Ă��� DLL �܂���
$$// �A�v���P�[�V�����ɑ΂�(�f�[�^�x�[�X �r���[�Ȃ�)�A�����t���� DAO �� ODBC ���C���N���[�h���܂��B
$$// ���݂̃r���[���g�p����Ă��鎞�́A ��ɑΉ�����w�b�_�[�̂݃C���N���[�h���܂��B
$$// �ŏ��́A���݂̃r���[���g�p����Ă��܂�:
$$IF(CRecordView)
#include <afxdb.h>			// MFC ODBC �f�[�^�x�[�X �N���X
$$ELIF(CDaoRecordView)
#include <afxdao.h>			// MFC DAO �f�[�^�x�[�X �N���X
$$ELIF(DB || PROJTYPE_DLL)
$$// ���̈ʒu�ōŏ����x�� DB �T�|�[�g���v������邩�A�܂��� DLL �ł��B�r���[�͑I������Ă��܂���B

#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>			// MFC ODBC �f�[�^�x�[�X �N���X
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>			// MFC DAO �f�[�^�x�[�X �N���X
#endif // _AFX_NO_DAO_SUPPORT

$$ENDIF // database/DLL options
#include <afxdtctl.h>		// MFC �� Internet Explorer 4 �R���� �R���g���[�� �T�|�[�g
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC �� Windows �R���� �R���g���[�� �T�|�[�g
#endif // _AFX_NO_AFXCMN_SUPPORT
$$IF(CHtmlView)
#include <afxhtml.h>			// MFC HTML �r���[ �T�|�[�g
$$ENDIF

$$IF(SOCKETS)
#include <afxsock.h>		// MFC �̃\�P�b�g�g���@�\
$$ENDIF //SOCKETS
$$IF(CRichEditView)
#include <afxrich.h>		// MFC ���b�` �G�f�B�b�g �N���X
$$ENDIF //CRichEditView
$$IF(ATL_SUPPORT)
#include <atlbase.h>
extern CComModule _Module;
$$ENDIF
$$IF(OLEDB)
#include <atlbase.h>
extern CComModule _Module;
#include <atlcom.h>
#include <atldbcli.h>
#include <afxoledb.h>
$$ENDIF
$$IF(PROJTYPE_DLG)
$$IF(AUTOMATION)

$$IF(VERBOSE)
// ���̃}�N���� bMultiInstance �p�����[�^�p�� COleObjectFactory �R���X�g���N�^
// TRUE ��n���ȊO�� IMPLEMENT_OLECREATE �Ɠ����ł��B
// �I�[�g���[�V���� �R���g���[���ɂ���ėv�������e�I�[�g���[�V���� �v���L�V
// �I�u�W�F�N�g�ɑ΂��ċN�������悤�ɂ��̃A�v���P�[�V�����̃C���X�^���X�𕪂��܂��B
$$ENDIF //VERBOSE
#ifndef IMPLEMENT_OLECREATE2
#define IMPLEMENT_OLECREATE2(class_name, external_name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
	AFX_DATADEF COleObjectFactory class_name::factory(class_name::guid, \
		RUNTIME_CLASS(class_name), TRUE, _T(external_name)); \
	const AFX_DATADEF GUID class_name::guid = \
		{ l, w1, w2, { b1, b2, b3, b4, b5, b6, b7, b8 } };
#endif // IMPLEMENT_OLECREATE2
$$ENDIF //AUTOMATION
$$ENDIF //PROJTYPE_DLG

//{{AFX_INSERT_LOCATION}}
// $$INSERT_LOCATION_COMMENT$$

#endif // !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
