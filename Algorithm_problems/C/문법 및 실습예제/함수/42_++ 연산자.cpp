#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func42() {
	int a = 0;
	a++; // �� �ڵ� ���Ŀ� a�� 1�̵ȴ�.
	++a; // �� �ڵ� ���� ���� a�� 2���ȴ�.
	int b;
	b = a++; // 1.���� 2.����
	// a == 3, b == 2
	printf("%d %d\n", a, b);
	b = ++a; // 1.���� 2.����
	// �̶� a == 4, b == 4
	printf("%d %d\n", a, b);

	// b = (a++) + 2; // �̷� �ڵ�� �ۼ� ���� �ʴ´�.
}

void main()
{
	srand((unsigned)time(NULL));

	func42();
}