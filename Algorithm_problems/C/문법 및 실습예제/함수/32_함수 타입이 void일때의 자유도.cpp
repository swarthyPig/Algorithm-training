#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// �Լ��� Ÿ���� void�� ������ ��������� Ÿ�Կ� ������ ����.
void *func32() {
	char *a;
	short *b = new short;
	int *c;

	//return a;
	return b;
	//return c;
	// void�� �Լ��� ���� �߱� ������ a,b,c ��δ� ���� ����
}


void main()
{
	srand((unsigned)time(NULL));

	short *p32 = (short*)func32();
	delete p32;
}