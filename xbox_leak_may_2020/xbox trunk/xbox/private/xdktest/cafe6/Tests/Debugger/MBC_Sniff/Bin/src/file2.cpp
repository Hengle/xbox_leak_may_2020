#include "mbctest.h"

TCHAR glbDBNumbers[21];

int file_two()
{
TCHAR *pch = glbDBNumbers;
TCHAR *t1 = "��", *t2 = "�O";				// ��= 8be0,�O= 824f

_tcscpy( glbDBNumbers, DBC_NUMBERS );		// Copy ���P�Q�R�B�B�B

_tccpy( pch, t1 );

/*
	pch now points to '��' DBCS character
*/

_tccpy( pch, t2 );


return 0;
}


