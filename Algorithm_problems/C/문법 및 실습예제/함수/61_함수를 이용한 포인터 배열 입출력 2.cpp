#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func61(int *p, int s, int add) { // �� �ֱ�
	for (int i = 0; i < s; i++)
	{
		p[i] = p[i] + add;
	}
}

void main()
{
	srand((unsigned)time(NULL));

	int ar[] = { 0, 1, 2 };

	func61(ar, sizeof(ar) / sizeof(int), 10);

	for (int i = 0; i < 3; i++) { // �� ���
		printf("%d\n", ar[i]);
	}
}#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func61(int *p, int s, int add) { // �� �ֱ�
	for (int i = 0; i < s; i++)
	{
		p[i] = p[i] + add;
	}
}

void main()
{
	srand((unsigned)time(NULL));

	int ar[] = { 0, 1, 2 };

	func61(ar, sizeof(ar) / sizeof(int), 10);

	for (int i = 0; i < 3; i++) { // �� ���
		printf("%d\n", ar[i]);
	}
}