#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// �μ� Ÿ���� void�� �������� ������, ����Ʈ���� ����, ĳ����
void func28(void *a, void *b, void *c) { //��� Ÿ�� �޴� ���� ����, ��� �޴³� �°� ĳ��������ߵ�
	printf("%c\n", (char)*(char*)a);
	printf("%d\n", (int)*(int*)b);
	printf("%d\n", (short)*(short*)c);
}


void main()
{
	srand((unsigned)time(NULL));

	char x = 'A';
	int y = 10;
	short z = 30;
	func28(&x, &y, &z);
}