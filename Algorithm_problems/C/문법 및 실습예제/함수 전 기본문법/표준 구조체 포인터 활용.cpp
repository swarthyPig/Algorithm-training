#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void main()
{
	srand((unsigned)time(NULL));

	BITMAPFILEHEADER a;
	LPBITMAPFILEHEADER b;

	b = new BITMAPFILEHEADER; // �Ҵ�
	b->bfType = 20; //WORD(unsigned short)
	a.bfType = 10;

	printf("%d %d %d\n", &b->bfType, b->bfType, a.bfType); // (b���ּ�, b�� ����, a�� ��)

	delete b;
}