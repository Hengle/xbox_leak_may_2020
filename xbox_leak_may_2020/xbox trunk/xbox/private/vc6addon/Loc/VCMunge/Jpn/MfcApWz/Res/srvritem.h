// $$srvritem_hfile$$.h : $$SRVRITEM_CLASS$$ �N���X�̐錾����уC���^�[�t�F�C�X�̒�`�����܂��B
//

#if !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
#define $$FILE_NAME_SYMBOL$$_INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class $$SRVRITEM_CLASS$$ : public $$SRVRITEM_BASE_CLASS$$
{
	DECLARE_DYNAMIC($$SRVRITEM_CLASS$$)

// �R���X�g���N�^
public:
	$$SRVRITEM_CLASS$$($$DOC_CLASS$$* pContainerDoc);

// �A�g���r���[�g
	$$DOC_CLASS$$* GetDocument() const
		{ return ($$DOC_CLASS$$*)$$SRVRITEM_BASE_CLASS$$::GetDocument(); }

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL($$SRVRITEM_CLASS$$)
	public:
	virtual BOOL OnDraw(CDC* pDC, CSize& rSize);
	virtual BOOL OnGetExtent(DVASPECT dwDrawAspect, CSize& rSize);
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
public:
	~$$SRVRITEM_CLASS$$();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	virtual void Serialize(CArchive& ar);   // �h�L�������g I/O �ɑ΂��ăI�[�o�[���C�h����܂��B
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// $$INSERT_LOCATION_COMMENT$$

#endif // !defined($$FILE_NAME_SYMBOL$$_INCLUDED_)
