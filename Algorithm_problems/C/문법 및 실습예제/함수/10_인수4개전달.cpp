#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// �μ� 4�� ���� �޴� �Լ�(����)
void func10(int a, char b, int c, char d) {
	printf("%d %c %d %c\n", a, b, c, d);
}

void main()
{
	srand((unsigned)time(NULL));

	func10(65, 'A', 'A', 65);
}