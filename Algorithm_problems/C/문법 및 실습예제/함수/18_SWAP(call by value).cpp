#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// SWAP �Լ����� a�� b�� ��ȯ�Ǿ����� n6�� n7�� ��ȯ�������� call by value
void func18(int a, int b) {
	int t;
	printf("%d %d\n", a, b);
	t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);
}

void main()
{
	srand((unsigned)time(NULL));

	int n6 = 10, n7 = 20;
	printf("%d %d\n", n6, n7);
	func18(n6, n7);
	printf("%d %d\n", n6, n7);
	printf("\n");
}