#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// ������ �޸𸮿� �ȵ� �޸𸮴� �ּ� ���� �ٸ���
void func17(int a, int *b) {
	printf("%d %d\n", &a, b);
}

void main()
{
	srand((unsigned)time(NULL));

	int n4 = 10, n5 = 20;
	printf("%d %d\n", &n4, &n5);

	func17(n4, &n5); //n4 �� a�� �ٸ� �޸�, n5�� *b�� ���� �޸�(����)
}