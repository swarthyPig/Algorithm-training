#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// �� ������ ���� ��ȯ�ϴ� ���α׷�(SWAP)
void func11() {
	int a = 30, b = 50;
	printf("%d%d\n", a, b);
	int t = a; // t = 30
	a = b; // a = 50	
	b = t; // b = 30

	printf("%d%d\n", a, b);
}

void main()
{
	srand((unsigned)time(NULL));

	func11(); 
	//int n2 = func11(); ���ϰ��� ��� �ȵ�
	//printf("%d\n", n2);
}