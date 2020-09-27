#include "mbctest.h"

TCHAR *glbHiragana = "���������Ȃ͂܂���";
TCHAR *glbKatakana = "�A�J�T�^�i�n�}�p����";


int main( int argc, char *argv[] )
{
TCHAR *locHiragana = "�������������Ⴕ�サ�傶�Ⴖ�ザ����ƃ�����������������";
TCHAR *locKatakana = "�A�C�E�G�I�V���V���V���W���W���W���b�g���@���B�����F�t�H";
TCHAR *locKanji    = "�����ΐ��؋��y";		// Days of the week
TCHAR locSBKana[10];

/*
	�d������������  ����  ������������  ��������  ���������������� �i�J�^�J�i�j
	���������������������D
*/
locSBKana[0] = '�';
locSBKana[1] = '�';
locSBKana[2] = '�';
locSBKana[3] = '�';
locSBKana[4] = '�';
locSBKana[5] = '\0';

file_two();

_tprintf( "%s %s\n", glbHiragana, glbKatakana );
_tprintf( "Single byte kana: %s\n", locSBKana );
_tprintf( "Days of the week: %s\n", locKanji );
_tprintf( "DB Numbers      : %s\n", glbDBNumbers );

return 0;
}
