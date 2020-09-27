// $$cntritem_hfile$$.h : $$CNTRITEM_CLASS$$ �N���X�̐錾����уC���^�[�t�F�C�X�̒�`�����܂��B
//

#if !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
#define $$FILE_NAME_SYMBOL$$_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class $$DOC_CLASS$$;
class $$VIEW_CLASS$$;

class $$CNTRITEM_CLASS$$ : public $$CNTRITEM_BASE_CLASS$$
{
	DECLARE_SERIAL($$CNTRITEM_CLASS$$)

// �R���X�g���N�^
public:
$$IF(CRichEditView)
	$$CNTRITEM_CLASS$$(REOBJECT* preo = NULL, $$DOC_CLASS$$* pContainer = NULL);
$$ELSE
	$$CNTRITEM_CLASS$$($$DOC_CLASS$$* pContainer = NULL);
$$ENDIF //CRichEditView
$$IF(VERBOSE)
		// ����: pContainer �� NULL �ɂ���� IMPLEMENT_SERIALIZE ���s�����Ƃ��ł��܂��B
		//  IMPLEMENT_SERIALIZE ���s�����߂ɂ̓N���X���Ɉ����̂Ȃ��R���X�g���N�^���K�v�ł��B
		//  �ʏ�AOLE �A�C�e���� NULL �łȂ��h�L�������g �|�C���^�őg�ݍ��܂�Ă��܂��B
		//
$$ENDIF

// �A�g���r���[�g
public:
	$$DOC_CLASS$$* GetDocument()
		{ return ($$DOC_CLASS$$*)$$CNTRITEM_BASE_CLASS$$::GetDocument(); }
	$$VIEW_CLASS$$* GetActiveView()
		{ return ($$VIEW_CLASS$$*)$$CNTRITEM_BASE_CLASS$$::GetActiveView(); }

	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL($$CNTRITEM_CLASS$$)
	public:
$$IF(!CRichEditView)
	virtual void OnChange(OLE_NOTIFICATION wNotification, DWORD dwParam);
	virtual void OnActivate();
$$ENDIF //!CRichEditView
	protected:
$$IF(!CRichEditView)
$$IF(!ACTIVE_DOC_CONTAINER)
	virtual void OnGetItemPosition(CRect& rPosition);
$$ENDIF
	virtual void OnDeactivateUI(BOOL bUndoable);
	virtual BOOL OnChangeItemPosition(const CRect& rectPos);
$$IF(CONTAINER_SERVER)
	virtual BOOL CanActivate();
$$ENDIF
$$ENDIF //!CRichEditView
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
public:
	~$$CNTRITEM_CLASS$$();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
$$IF(!CRichEditView)
	virtual void Serialize(CArchive& ar);
$$ENDIF //!CRichEditView
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// $$INSERT_LOCATION_COMMENT$$

#endif // !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
