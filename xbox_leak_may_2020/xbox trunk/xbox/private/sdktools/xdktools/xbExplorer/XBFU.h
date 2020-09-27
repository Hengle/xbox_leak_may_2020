//
//
// Xbox Target Box file utility
//
// 2000/12/8	YuichM		Release alpha version
// 2000/12/19-	Shinjich
//
//

#pragma warning(disable:4786)
#include <map>

using namespace std;

typedef map<HANDLE, PDM_WALK_DIR > MAPFINDFILE;

class XBFU
{
public:
	XBFU();
	~XBFU();

	HRESULT GetTarget( LPSTR, UINT );						// �^�[�Q�b�g���̎擾
	HRESULT SetTarget( LPCSTR );							// �^�[�Q�b�g���̐ݒ�
	bool IsDrive( CHAR );									// �h���C�u�����݂��邩�̃`�F�b�N�ia...z) YES=TRUE

	HANDLE FindFirstFile( LPCSTR, PDM_FILE_ATTRIBUTES, bool fTargetXbox, LPCSTR = NULL );	// �t�@�C������
	bool FindNextFile( HANDLE, PDM_FILE_ATTRIBUTES, bool fTargetXbox );
	bool FindClose( HANDLE, bool fTargetXbox );

    HRESULT CopyMoveToXbox(LPCSTR szSrcPathFile, LPCSTR szDestPathFile, bool *pfQuery,
						   bool fDestXbox, bool fSrcXbox, bool fRecursive, bool fMove, bool *pfSkipped = NULL);

    bool Del(LPCSTR szPathFileName, bool *pfQuery, HWND hWnd);
	bool Md( LPCSTR );										// �f�B���N�g���쐬
	bool Ren( LPCSTR, LPCSTR );								// �t�@�C�����ύX

	HRESULT Reboot( bool = FALSE, LPCSTR = NULL );			// �^�[�Q�b�g�����u�[�g����
    HRESULT GetFileAttributes(char *szFileName, DM_FILE_ATTRIBUTES *pdmfa, bool fXbox = true);
    HRESULT SetFileAttributes(char *szFileName, DM_FILE_ATTRIBUTES *pdmfa, bool fXbox = true);
    int GetNumFiles(char *szRoot);
    bool RemoveAttribute(const char *szDestPathFile, DWORD dwAttr, bool fXbox = true);
    HRESULT GetDriveFreeSize(char *szDrive, ULARGE_INTEGER *puliSpace);
    bool SetAttribute(const char *szDestPathFile, DWORD dwAttr, bool fXbox = true);
    bool GetDriveList(LPSTR sz, LPDWORD pcch);
    bool FailedConnect()
    {
        bool fRet= m_fCannotConnect; m_fCannotConnect = false; return fRet;
    }
    void SetFailed() {m_fCannotConnect = true; }
private:
    void DoFailMoveCopyMsg(bool fMove);
    int m_cOpenedHandles;
    bool m_fCannotConnect;
    MAPFINDFILE m_mappdmwdFindFile;
};

