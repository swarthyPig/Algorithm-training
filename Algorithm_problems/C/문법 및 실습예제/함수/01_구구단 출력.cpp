#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// void func01() : �Լ�����(Function Prototype) 
// 5�����
void func01() {
	for (int i = 1; i <= 10; i++) {
		printf("5 * %d = %02d\n", i, i * 5);
	}printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func01();
}