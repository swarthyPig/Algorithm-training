#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// a�� b��
void func09(int a, int b) { // a=3, b=5 �� ���� 
	int s = 1;
	for (int i = 0; i < b; i++) {
		s *= a;
	}
	printf("%d\n", s);
}

void main()
{
	srand((unsigned)time(NULL));

	func09(2, 8);
}