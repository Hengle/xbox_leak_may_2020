// $$dlgautoproxy_hfile$$.h : �w�b�_�[ �t�@�C��
//

#if !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
#define $$FILE_NAME_SYMBOL$$_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class $$DLG_CLASS$$;

/////////////////////////////////////////////////////////////////////////////
// $$DLGAUTOPROXY_CLASS$$ �R�}���h �^�[�Q�b�g

class $$DLGAUTOPROXY_CLASS$$ : public $$DLGAUTOPROXY_BASE_CLASS$$
{
	DECLARE_DYNCREATE($$DLGAUTOPROXY_CLASS$$)

	$$DLGAUTOPROXY_CLASS$$();           // ���I�����Ŏg�p����� protected �R���X�g���N�^

// �A�g���r���[�g
public:
	$$DLG_CLASS$$* m_pDialog;

// �I�y���[�V����
public:

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂�
	//{{AFX_VIRTUAL($$DLGAUTOPROXY_CLASS$$)
	public:
	virtual void OnFinalRelease();
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
protected:
	virtual ~$$DLGAUTOPROXY_CLASS$$();

	// �������ꂽ���b�Z�[�W �}�b�v�֐�
	//{{AFX_MSG($$DLGAUTOPROXY_CLASS$$)
		// ���� - ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
	DECLARE_OLECREATE($$DLGAUTOPROXY_CLASS$$)

	// �������ꂽ OLE �f�B�X�p�b�` �}�b�v�֐�
	//{{AFX_DISPATCH($$DLGAUTOPROXY_CLASS$$)
		// ���� - ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// $$INSERT_LOCATION_COMMENT$$

#endif // !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
