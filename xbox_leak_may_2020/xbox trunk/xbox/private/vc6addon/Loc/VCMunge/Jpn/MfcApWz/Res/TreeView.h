// $$treeview_hfile$$.h : $$TREEVIEW_CLASS$$ �N���X�̐錾����уC���^�[�t�F�C�X�̒�`�����܂��B
//
/////////////////////////////////////////////////////////////////////////////

#if !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
#define $$FILE_NAME_SYMBOL$$_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class $$DOC_CLASS$$;

class $$TREEVIEW_CLASS$$ : public CTreeView
{
protected: // �V���A���C�Y�@�\�݂̂���쐬���܂��B
	$$TREEVIEW_CLASS$$();
	DECLARE_DYNCREATE($$TREEVIEW_CLASS$$)

// �A�g���r���[�g
public:
	$$DOC_CLASS$$* GetDocument();

// �I�y���[�V����
public:

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL($$TREEVIEW_CLASS$$)
	public:
	virtual void OnDraw(CDC* pDC);  // ���̃r���[��`�悷��ۂɃI�[�o�[���C�h����܂��B
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
$$IF(PRINT)
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
$$ENDIF
	virtual void OnInitialUpdate(); // �\�z��̍ŏ��̂P�x�����Ăяo����܂��B
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
public:
	virtual ~$$TREEVIEW_CLASS$$();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// �������ꂽ���b�Z�[�W �}�b�v�֐�
protected:
	//{{AFX_MSG($$TREEVIEW_CLASS$$)
$$IF(VERBOSE)
		// ���� -  ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
		//         ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
$$ENDIF
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // $$treeview_ifile$$.cpp �t�@�C�����f�o�b�O���̎��g�p����܂��B
inline $$DOC_CLASS$$* $$TREEVIEW_CLASS$$::GetDocument()
   { return ($$DOC_CLASS$$*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// $$INSERT_LOCATION_COMMENT$$

#endif // !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
