// $$ipframe_hfile$$.h : $$IPFRAME_CLASS$$ �N���X�̐錾����уC���^�[�t�F�C�X�̒�`���s���܂��B
//

#if !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
#define $$FILE_NAME_SYMBOL$$_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class $$IPFRAME_CLASS$$ : public $$IPFRAME_BASE_CLASS$$
{
	DECLARE_DYNCREATE($$IPFRAME_CLASS$$)
public:
	$$IPFRAME_CLASS$$();

// �A�g���r���[�g
public:

// �I�y���[�V����
public:

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL($$IPFRAME_CLASS$$)
$$IF(TOOLBAR)
	public:
	virtual BOOL OnCreateControlBars(CFrameWnd* pWndFrame, CFrameWnd* pWndDoc);
$$ENDIF
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
public:
	virtual ~$$IPFRAME_CLASS$$();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
$$IF(TOOLBAR)
	CToolBar    m_wndToolBar;
$$IF(REBAR)
	CDialogBar m_wndDlgBar;
	CReBar m_wndReBar;
$$ENDIF
$$ENDIF
	COleDropTarget	m_dropTarget;
	COleResizeBar   m_wndResizeBar;

// �������ꂽ���b�Z�[�W �}�b�v�֐�
protected:
	//{{AFX_MSG($$IPFRAME_CLASS$$)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
$$IF(VERBOSE)
		// ���� - ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
		//        ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
$$ENDIF
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// $$INSERT_LOCATION_COMMENT$$

#endif // !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
