#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// 1~*���� ���ϴ� �ջ� ���α׷�
void func06(int su) {
	int sum = 0;
	for (int i = 1; i <= su; i++) {
		sum += i;
	}
	printf("%d\n", sum);
	printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func06(1000);
}