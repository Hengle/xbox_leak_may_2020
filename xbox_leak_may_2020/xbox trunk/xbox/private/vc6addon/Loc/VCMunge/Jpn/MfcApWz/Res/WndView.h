// $$wndview_hfile$$.h : $$WNDVIEW_CLASS$$ �N���X�̃C���^�[�t�F�C�X�̒�`�����܂��B
//
/////////////////////////////////////////////////////////////////////////////

#if !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
#define $$FILE_NAME_SYMBOL$$_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// $$WNDVIEW_CLASS$$ �E�B���h�E

class $$WNDVIEW_CLASS$$ : public $$WNDVIEW_BASE_CLASS$$
{
// �R���X�g���N�^
public:
	$$WNDVIEW_CLASS$$();

// �A�g���r���[�g
public:

// �I�y���[�V����
public:

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL($$WNDVIEW_CLASS$$)
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
public:
	virtual ~$$WNDVIEW_CLASS$$();

	// �������ꂽ���b�Z�[�W �}�b�v�֐�
protected:
	//{{AFX_MSG($$WNDVIEW_CLASS$$)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ ���V������`��������ꍇ�ɂ́A���̍s�����O�ɒǉ����܂��B

#endif // !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
