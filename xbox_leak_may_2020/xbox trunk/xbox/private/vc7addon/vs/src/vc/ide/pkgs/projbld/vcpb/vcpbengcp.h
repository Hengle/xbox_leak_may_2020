#ifndef __VcpbengCP_H_
#define __VcpbengCP_H_

template <class T, const IID* piid>
class CProxy_IVCProjectEngineEvents : public IConnectionPointImpl<T, piid, CComDynamicUnkArray>
{
	//Warning this class will  be regenerated by the wizard.
public:
	void Fire_OnItemAdded( IDispatch *pItem, IDispatch *pItemParent )
	{
		int nConnections = m_vec.GetSize();
		if( nConnections )
		{
			T* pT = static_cast<T*>(this);
			int nConnectionIndex;

			for( nConnectionIndex = 0; nConnectionIndex < nConnections; nConnectionIndex++ )
			{
				pT->Lock();
				CComPtr<IUnknown> sp = m_vec.GetAt( nConnectionIndex );
				pT->Unlock();
				CComQIPtr<IVCProjectEngineEvents> p = sp;
				if( p )
				{
					p->ItemAdded( pItem, pItemParent );
				}
				else
				{
					CComQIPtr<IDispatch> pDisp = reinterpret_cast<IDispatch*>(sp.p);
					if( pDisp )
					{
						CComDispatchDriver disp( pDisp );
						CComVariant varItem( pItem );
						CComVariant varItemParent( pItemParent );
						disp.Invoke2( ENGEVENTID_ItemAdded, &varItem, &varItemParent );
					}
				}
			}
		}
	}

	void Fire_OnItemRemoved( IDispatch *pItem, IDispatch *pItemParent )  
	{
		int nConnections = m_vec.GetSize();
		if( nConnections )
		{
			T* pT = static_cast<T*>(this);
			int nConnectionIndex;

			for( nConnectionIndex = 0; nConnectionIndex < nConnections; nConnectionIndex++ ) 
			{
				pT->Lock();
				CComPtr<IUnknown> sp = m_vec.GetAt( nConnectionIndex );
				pT->Unlock();

				CComQIPtr<IVCProjectEngineEvents> p = sp;
				if( p )
				{
					p->ItemRemoved( pItem, pItemParent );
				}
				else
				{
					CComQIPtr<IDispatch> pDisp = reinterpret_cast<IDispatch*>(sp.p);
					if( pDisp )
					{
						CComDispatchDriver disp( pDisp );
						CComVariant varItem( pItem );
						CComVariant varItemParent( pItemParent );
						disp.Invoke2( ENGEVENTID_ItemRemoved, &varItem, &varItemParent );
					}
				}
			}
		}
	}


	void Fire_OnItemRenamed( IDispatch *pItem, IDispatch *pItemParent, BSTR bstrOldName )
	{
		int nConnections = m_vec.GetSize();
		if( nConnections )
		{
			T* pT = static_cast<T*>(this);
			int nConnectionIndex;

			for( nConnectionIndex = 0; nConnectionIndex < nConnections; nConnectionIndex++ )
			{
				pT->Lock();
				CComPtr<IUnknown> sp = m_vec.GetAt( nConnectionIndex );
				pT->Unlock();

				CComQIPtr<IVCProjectEngineEvents> p = sp;
				if( p )
				{
					p->ItemRenamed( pItem, pItemParent, bstrOldName );
				}
				else
				{
					CComQIPtr<IDispatch> pDisp = reinterpret_cast<IDispatch*>(sp.p);
					if( pDisp )
					{
						CComDispatchDriver disp( pDisp );
						CComVariant varArgs[3];
						varArgs[2] = pItem;
						varArgs[1] = pItemParent;
						varArgs[0] = bstrOldName;
						disp.InvokeN( ENGEVENTID_ItemRenamed, varArgs, 3 );
					}
				}
			}
		}
	}


	void Fire_OnItemMoved( IDispatch *pItem, IDispatch *pNewParent, IDispatch* pOldParent )
	{
		int nConnections = m_vec.GetSize();
		if( nConnections )
		{
			T* pT = static_cast<T*>(this);
			int nConnectionIndex;

			for( nConnectionIndex = 0; nConnectionIndex < nConnections; nConnectionIndex++ )
			{
				pT->Lock();
				CComPtr<IUnknown> sp = m_vec.GetAt( nConnectionIndex );
				pT->Unlock();

				CComQIPtr<IVCProjectEngineEvents> p = sp;
				if( p )
				{
					p->ItemMoved( pItem, pNewParent, pOldParent );
				}
				else
				{
					CComQIPtr<IDispatch> pDisp = reinterpret_cast<IDispatch*>(sp.p);
					if( pDisp )
					{
						CComDispatchDriver disp( pDisp );
						CComVariant varArgs[3];
						varArgs[2] = pItem;
						varArgs[1] = pNewParent;
						varArgs[0] = pOldParent;
						disp.InvokeN( ENGEVENTID_ItemMoved, varArgs, 3 );
					}
				}
			}
		}
	}


	void Fire_OnItemPropertyChange( IDispatch *pItem, long dispid )
	{
		int nConnections = m_vec.GetSize();
		if( nConnections )
		{
			T* pT = static_cast<T*>(this);
			int nConnectionIndex;

			for( nConnectionIndex = 0; nConnectionIndex < nConnections; nConnectionIndex++ )
			{
				pT->Lock();
				CComPtr<IUnknown> sp = m_vec.GetAt( nConnectionIndex );
				pT->Unlock();

				CComQIPtr<IVCProjectEngineEvents> p = sp;
				if( p )
				{
					p->ItemPropertyChange( pItem, dispid );
				}
				else
				{
					CComQIPtr<IDispatch> pDisp = reinterpret_cast<IDispatch*>(sp.p);
					if( pDisp )
					{
						CComDispatchDriver disp( pDisp );
						CComVariant varItem( pItem );
						CComVariant varDispid( dispid );
						disp.Invoke2( ENGEVENTID_ItemPropertyChange, &varItem, &varDispid );
					}
				}
			}
		}
	}

	void Fire_OnSccEvent( IDispatch* pItem, enumSccEvent event, VARIANT_BOOL *pRet )
	{
		if( pRet == NULL )
			return;

		if (event != eProjectInScc && (!PROJECT_IS_LOADED() || !STYLESHEET_IS_LOADED()))
			return;

		int nConnections = m_vec.GetSize();
		if( nConnections )
		{
			T* pT = static_cast<T*>(this);
			int nConnectionIndex;

			for( nConnectionIndex = 0; nConnectionIndex < nConnections; nConnectionIndex++ )
			{
				pT->Lock();
				CComPtr<IUnknown> sp = m_vec.GetAt( nConnectionIndex );
				pT->Unlock();
				CComQIPtr<IVCProjectEngineEvents> p = sp;
				if( p )
				{
					p->SccEvent( pItem, event, pRet );
				}
				else
				{
					CComQIPtr<IDispatch> pDisp = reinterpret_cast<IDispatch*>(sp.p);
					if( pDisp )
					{
						CComDispatchDriver disp( pDisp );
						CComVariant varItem;
						CComVariant varEvent;
						varItem = pItem;
						varEvent = event;
						disp.Invoke2( ENGEVENTID_SccEvent, &varItem, &varEvent );
					}
				}
			}
		}
	}

	void Fire_OnReportError( BSTR bstrErrMsg, HRESULT hrReport, BSTR bstrHelpKeyword )
	{
		int nConnections = m_vec.GetSize();
		if( nConnections )
		{
			T* pT = static_cast<T*>(this);
			int nConnectionIndex;

			for( nConnectionIndex = 0; nConnectionIndex < nConnections; nConnectionIndex++ )
			{
				pT->Lock();
				CComPtr<IUnknown> sp = m_vec.GetAt( nConnectionIndex );
				pT->Unlock();

				CComQIPtr<IVCProjectEngineEvents> p = sp;
				if( p )
				{
					p->ReportError( bstrErrMsg, hrReport, bstrHelpKeyword );
				}
				else
				{
					CComQIPtr<IDispatch> pDisp = reinterpret_cast<IDispatch*>(sp.p);
					if( pDisp )
					{
						CComDispatchDriver disp( pDisp );
						CComVariant varArgs[3];
						varArgs[2] = bstrErrMsg;
						varArgs[1] = (SCODE)hrReport;
						varArgs[0] = bstrHelpKeyword;
						disp.InvokeN( ENGEVENTID_ReportError, varArgs, 3 );
					}
				}
			}
		}
	}

	void Fire_OnProjectBuildStarted( IDispatch *pCfg )
	{
		int nConnections = m_vec.GetSize();
		if( nConnections )
		{
			T* pT = static_cast<T*>(this);
			int nConnectionIndex;

			for( nConnectionIndex = 0; nConnectionIndex < nConnections; nConnectionIndex++ )
			{
				pT->Lock();
				CComPtr<IUnknown> sp = m_vec.GetAt( nConnectionIndex );
				pT->Unlock();

				CComQIPtr<IVCProjectEngineEvents> p = sp;
				if( p )
				{
					p->ProjectBuildStarted( pCfg );
				}
				else
				{
					CComQIPtr<IDispatch> pDisp = reinterpret_cast<IDispatch*>(sp.p);
					if( pDisp )
					{
						CComDispatchDriver disp( pDisp );
						CComVariant varCfg( pCfg );
						disp.Invoke1( ENGEVENTID_ProjectBuildStarted, &varCfg );
					}
				}
			}
		}
	}

	void Fire_OnProjectBuildFinished( IDispatch *pCfg, long errors, long warnings, VARIANT_BOOL bCancelled )
	{
		int nConnections = m_vec.GetSize();
		if( nConnections )
		{
			T* pT = static_cast<T*>(this);
			int nConnectionIndex;

			for( nConnectionIndex = 0; nConnectionIndex < nConnections; nConnectionIndex++ )
			{
				pT->Lock();
				CComPtr<IUnknown> sp = m_vec.GetAt( nConnectionIndex );
				pT->Unlock();

				CComQIPtr<IVCProjectEngineEvents> p = sp;
				if( p )
				{
					p->ProjectBuildFinished( pCfg, errors, warnings, bCancelled );
				}
				else
				{
					CComQIPtr<IDispatch> pDisp = reinterpret_cast<IDispatch*>(sp.p);
					if( pDisp )
					{
						CComDispatchDriver disp( pDisp );
						CComVariant rgVars[4];
						rgVars[3] = pCfg;
						rgVars[2] = errors;
						rgVars[1] = warnings;
						rgVars[0] = bCancelled;
						disp.InvokeN( ENGEVENTID_ProjectBuildFinished, rgVars, 4 );
					}
				}
			}
		}
	}
};
#endif	//  __VcpbengCP_H_
