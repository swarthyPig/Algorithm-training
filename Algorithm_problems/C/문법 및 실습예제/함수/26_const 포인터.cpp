#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// ����Ʈ�� const ����
// func26(30, 40, new int, new int[3], &n26);
void func26(int a, const int b, const int *c, int *const d, const int *const e) {
	a = 10;
	//b = 20; // �� ���� ����

	//*c = 30; // ���� ������ const �� ����, ������ x, �ּҴ� ���� ����

	c = new int;

	//d = new int; // �ּҸ� ���� �Ұ�, ���� ���� ����
	*d = 40;

	// const int *const e : �ּҵ� ���� �Ұ� ���� ���� �Ұ�
	// *e = 50; // �� ���� �Ұ�
	// e = new int; // �ּ� ���� �Ұ�
}

void main()
{
	srand((unsigned)time(NULL));

	int n26 = 99;
	func26(30, 40, new int, new int[3], &n26);
}