// $$doc_hfile$$.h : $$DOC_CLASS$$ �N���X�̐錾����уC���^�[�t�F�C�X�̒�`�����܂��B
//
/////////////////////////////////////////////////////////////////////////////

#if !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
#define $$FILE_NAME_SYMBOL$$_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
$$IF(CRecordView || CDaoRecordView || COleDBRecordView)
#include "$$recset_hfile$$.h"
$$ENDIF

$$IF(MINI_SERVER || FULL_SERVER || CONTAINER_SERVER)

class $$SRVRITEM_CLASS$$;
$$ENDIF // SERVERS

class $$DOC_CLASS$$ : public $$DOC_BASE_CLASS$$
{
protected: // �V���A���C�Y�@�\�݂̂���쐬���܂��B
	$$DOC_CLASS$$();
	DECLARE_DYNCREATE($$DOC_CLASS$$)

// �A�g���r���[�g
public:
$$IF(MINI_SERVER || FULL_SERVER || CONTAINER_SERVER)
	$$SRVRITEM_CLASS$$* GetEmbeddedItem()
		{ return ($$SRVRITEM_CLASS$$*)$$DOC_BASE_CLASS$$::GetEmbeddedItem(); }
$$ENDIF
$$IF(CRecordView || CDaoRecordView || COleDBRecordView)
	$$RECSET_CLASS$$ $$RECSET_VARIABLE$$;
$$ENDIF

// �I�y���[�V����
public:

//�I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL($$DOC_CLASS$$)
$$IF(MINI_SERVER || FULL_SERVER || CONTAINER_SERVER)
	protected:
	virtual COleServerItem* OnGetEmbeddedItem();
$$ENDIF
	public:
	virtual BOOL OnNewDocument();
$$IF(!DB_NO_FILE)
	virtual void Serialize(CArchive& ar);
$$ENDIF
	//}}AFX_VIRTUAL
$$IF(CRichEditView)
	virtual $$CNTRITEM_BASE_CLASS$$* CreateClientItem(REOBJECT* preo) const;
$$ENDIF //CRichEditView

// �C���v�������e�[�V����
public:
	virtual ~$$DOC_CLASS$$();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
$$IF(ACTIVE_DOC_SERVER)
	virtual CDocObjectServer* GetDocObjectServer(LPOLEDOCUMENTSITE pDocSite);
$$ENDIF

// �������ꂽ���b�Z�[�W �}�b�v�֐�
protected:
	//{{AFX_MSG($$DOC_CLASS$$)
$$IF(VERBOSE)
		// ���� - ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
		//        ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
$$ENDIF
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
$$IF(AUTOMATION)

	// �������ꂽ OLE �f�B�X�p�b�` �}�b�v�֐�
	//{{AFX_DISPATCH($$DOC_CLASS$$)
$$IF(VERBOSE)
		// ���� - ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
		//        ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
$$ENDIF
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
$$ENDIF
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// $$INSERT_LOCATION_COMMENT$$

#endif // !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
