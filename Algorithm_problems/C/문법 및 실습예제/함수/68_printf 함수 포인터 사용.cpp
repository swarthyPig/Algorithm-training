#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u


// printf �Լ������� ���
void func68() {
	int(*pf)(char const* const, ...) = printf;
	pf("ȣ����_68\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func68();
	printf("ȣ����\n");
	
}