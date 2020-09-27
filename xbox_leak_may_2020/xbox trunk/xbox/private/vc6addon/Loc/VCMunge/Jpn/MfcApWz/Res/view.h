// $$view_hfile$$.h : $$VIEW_CLASS$$ �N���X�̐錾����уC���^�[�t�F�C�X�̒�`�����܂��B
//
/////////////////////////////////////////////////////////////////////////////

#if !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
#define $$FILE_NAME_SYMBOL$$_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

$$IF(CONTAINER || CONTAINER_SERVER)
class $$CNTRITEM_CLASS$$;
$$ENDIF
$$IF(CRecordView || CDaoRecordView || COleDBRecordView)
class $$RECSET_CLASS$$;
$$ENDIF

class $$VIEW_CLASS$$ : public $$VIEW_BASE_CLASS$$
{
protected: // �V���A���C�Y�@�\�݂̂���쐬���܂��B
	$$VIEW_CLASS$$();
	DECLARE_DYNCREATE($$VIEW_CLASS$$)
$$IF(CRecordView || CDaoRecordView || COleDBRecordView || CFormView)

public:
	//{{AFX_DATA($$VIEW_CLASS$$)
	enum{ IDD = IDD_$$SAFE_ROOT$$_FORM };
$$IF(CRecordView || CDaoRecordView || COleDBRecordView)
	$$RECSET_CLASS$$* m_pSet;
$$ENDIF
	// ����: ClassWizard �ɂ���Ă��̈ʒu�Ƀf�[�^ �����o���ǉ�����܂��B
	//}}AFX_DATA
$$ENDIF

// �A�g���r���[�g
public:
	$$DOC_CLASS$$* GetDocument();
$$IF(CONTAINER || CONTAINER_SERVER)
$$IF(!CRichEditView)
$$IF(VERBOSE)
	//  m_pSelection �͌��݂� $$CNTRITEM_CLASS$$ �ɑ΂���I����ێ����Ă��܂��B
	// �����̃A�v���P�[�V�����ł��̂悤�ȃ����o�ϐ��́A�����̑I���� $$CNTRITEM_CLASS$$
	// �I�u�W�F�N�g�ł͂Ȃ��I�u�W�F�N�g�̑I�����\���ɕ\���ł��܂���B
	// ���̋@�\�͑I���@�\�����p���悤�Ƃ���v���O���}�̗����������邽
	// �߂ɑg�ݍ��܂�Ă��܂��B

	// TODO: ���̑I����@���A�v���P�[�V�����ɓK�������@�ɒu�������Ă��������B
$$ENDIF //VERBOSE
	$$CNTRITEM_CLASS$$* m_pSelection;
$$ENDIF //!CRichEditView
$$ENDIF //CONTAINERS

// �I�y���[�V����
public:

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL($$VIEW_CLASS$$)
	public:
$$IF(CRecordView)
	virtual CRecordset* OnGetRecordset();
$$ENDIF
$$IF(CDaoRecordView)
	virtual CDaoRecordset* OnGetRecordset();
$$ENDIF
$$IF(COleDBRecordView)
	virtual CRowset* OnGetRowset();
$$ENDIF
$$IF(CFormView || CRecordView || CDaoRecordView || COleDBRecordView)
$$ELIF(!CRichEditView);
	virtual void OnDraw(CDC* pDC);  // ���̃r���[��`�悷��ۂɃI�[�o�[���C�h����܂��B
$$ENDIF // !(CFormView || CRecordView || CDaoRecordView)
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
$$IF(CFormView || CRecordView || CDaoRecordView || COleDBRecordView)
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �̃T�|�[�g
$$ENDIF //CFormView || CRecordView || CDaoRecordView
$$IF(CScrollView || CONTAINER || CONTAINER_SERVER || CRecordView || CDaoRecordView || COleDBRecordView || CTreeView || CListView || CFormView || CHtmlView)
	virtual void OnInitialUpdate(); // �\�z��̍ŏ��̂P�x�����Ăяo����܂��B
$$ENDIF
$$IF(PRINT)
$$IF(!CHtmlView)
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
$$ENDIF
$$IF(CRichEditView||CHtmlView)
$$ELSE
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
$$ENDIF //!CRichEditView||CHtmlView
$$IF(CFormView || ACTIVE_DOC_CONTAINER)
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
$$ENDIF //CFormView
$$ENDIF //PRINT
$$IF(CONTAINER || CONTAINER_SERVER)
$$IF(!CRichEditView)
	virtual BOOL IsSelected(const CObject* pDocItem) const;// �R���e�i �T�|�[�g
$$ENDIF //!CRichEditView
$$ENDIF //CONTAINER || CONTAINER_SERVER
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
public:
	virtual ~$$VIEW_CLASS$$();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// �������ꂽ���b�Z�[�W �}�b�v�֐�
protected:
	//{{AFX_MSG($$VIEW_CLASS$$)
$$IF(VERBOSE)
		// ���� -  ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
		//         ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
$$ENDIF
$$IF(CONTAINER || CONTAINER_SERVER)
	afx_msg void OnDestroy();
$$IF(!CRichEditView)
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnInsertObject();
	afx_msg void OnCancelEditCntr();
$$ENDIF //!CRichEditView
$$ENDIF //CONTAINER || CONTAINER_SERVER
$$IF(MINI_SERVER || FULL_SERVER || CONTAINER_SERVER)
	afx_msg void OnCancelEditSrvr();
$$ENDIF //SERVERS
	//}}AFX_MSG
$$IF(PROJTYPE_EXPLORER)
$$IF(CListView)
	afx_msg void OnStyleChanged(int nStyleType, LPSTYLESTRUCT lpStyleStruct);
$$ENDIF
$$ENDIF
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // $$view_ifile$$.cpp �t�@�C�����f�o�b�O���̎��g�p����܂��B
inline $$DOC_CLASS$$* $$VIEW_CLASS$$::GetDocument()
   { return ($$DOC_CLASS$$*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// $$INSERT_LOCATION_COMMENT$$

#endif // !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
