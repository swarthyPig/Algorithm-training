#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// * �����
void func05(int su) {
	printf("%d�� �Դϴ�\n", su);
	for (int i = 1; i <= 10; i++) {
		printf("%d * %d = %02d\n", su, i, i * su);
	}printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func05(99);
}