// $$root$$.h : $$ROOT$$ �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C��
//

#if !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
#define $$FILE_NAME_SYMBOL$$_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // ���C�� �V���{��

/////////////////////////////////////////////////////////////////////////////
// $$APP_CLASS$$:
// ���̃N���X�̓���̒�`�Ɋւ��Ă� $$root$$.cpp �t�@�C�����Q�Ƃ��Ă��������B
//

class $$APP_CLASS$$ : public $$APP_BASE_CLASS$$
{
public:
	$$APP_CLASS$$();

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL($$APP_CLASS$$)
	public:
	virtual BOOL InitInstance();
$$IF(PROJTYPE_MDI)
$$IF(NODOCVIEW)
	virtual int ExitInstance();
$$ENDIF
$$ENDIF
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
$$IF(FULL_SERVER || MINI_SERVER || CONTAINER_SERVER || AUTOMATION)
	COleTemplateServer m_server;
$$IF(VERBOSE)
		// �h�L�������g���쐬���邽�߂̃T�[�o�[ �I�u�W�F�N�g
$$ENDIF
$$ENDIF
$$IF(NODOCVIEW)
$$IF(PROJTYPE_MDI)
protected:
	HMENU m_hMDIMenu;
	HACCEL m_hMDIAccel;
$$ENDIF

public:
$$ENDIF
	//{{AFX_MSG($$APP_CLASS$$)
	afx_msg void OnAppAbout();
$$IF(NODOCVIEW)
$$IF(PROJTYPE_MDI)
	afx_msg void OnFileNew();
$$ENDIF
$$ENDIF
$$IF(VERBOSE)
		// ���� - ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
		//        ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
$$ENDIF
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

$$IF(VBX)
/////////////////////////////////////////////////////////////////////////////
// VB �C�x���g�̊O���錾

//{{AFX_VBX_REGISTER()
//}}AFX_VBX_REGISTER
$$ENDIF //VBX

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// $$INSERT_LOCATION_COMMENT$$

#endif // !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
