#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// �μ����� : �Լ��� �θ��� ���ڸ� ������(���Կ���)
// return �� : �Լ��� ������� ���� ��
void func04(int num) {
	printf("%d\n", num);
}

void main()
{
	srand((unsigned)time(NULL));

	func04(3);
}