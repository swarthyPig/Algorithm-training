#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// �μ� 2�� ���� �޴� �Լ�
void func08(int a, int b) { // void func08(int a, b)()�߸��� ����
	printf("%d\n", a + b);
}

void main()
{
	srand((unsigned)time(NULL));

	func08(10, 20);
}