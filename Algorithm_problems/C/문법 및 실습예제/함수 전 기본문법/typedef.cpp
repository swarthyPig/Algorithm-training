#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

typedef char ROBOT; // ����1
typedef int INT; // ����2
typedef unsigned int UI; // ����3
// ROBAT �̶�� ������ char�� �ٲ���
// #define �̶� �����
// ���� 1: �ڵ��� �������� ���̱� ���ؼ� ���
// ���� 2: ��Ÿ����
// ���� 3: Ÿ���� ���� �ҷ���
// Ÿ���� ���� ���� �����ϰڴ� ��� ��
// ��� Ÿ���� �빮�ڷ� �����Ѵ�.
typedef int *LPTIGER;

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void main()
{
	srand((unsigned)time(NULL));

	ROBOT a = 'A'; // ROBOT Ÿ���� char�� ���ǵǾ�����
	printf("%c\n", a);

	ROBOT atom = 'B';

	INT b = 30;

	UI c = 40;

	CHAR d;
	UINT e;

	BYTE f; // ���ֳ��� ���! typedef unsigned char
	WORD g; // ���ֳ��� ���! unsigned short
	DWORD h; // ���ֳ��� ���! unsigned long

	LPTIGER t1; // ����Ʈ ���� 

	t1 = new int; // �Ҵ�
	*t1 = 30; 
	printf("%d %d\n", t1, *t1); // �ּ�, ����

	delete t1; // ����

	LPINT; // typedef int far
}