// $$root$$.h : $$ROOT$$ �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C���ł��B
//

#if !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
#define $$FILE_NAME_SYMBOL$$_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// ���C�� �V���{��

/////////////////////////////////////////////////////////////////////////////
// $$APP_CLASS$$
// ���̃N���X�̓���̒�`�Ɋւ��Ă� $$root$$.cpp �t�@�C�����Q�Ƃ��Ă��������B
//

class $$APP_CLASS$$ : public $$APP_BASE_CLASS$$
{
public:
	$$APP_CLASS$$();

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL($$APP_CLASS$$)
$$IF(SOCKETS || AUTOMATION)
	public:
	virtual BOOL InitInstance();
$$ENDIF //SOCKETS || AUTOMATION
	//}}AFX_VIRTUAL

	//{{AFX_MSG($$APP_CLASS$$)
		// ���� -  ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
		//         ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// $$INSERT_LOCATION_COMMENT$$

#endif // !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
