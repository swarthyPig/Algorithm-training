#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// const ��� ���
void func25() {
	int a = 10;

	// ������ ���ȭ ��Ų��.
	// ������ ���� ��ȭ ��ų �� ������, ����� �ʱ�ȭ ���� ���� ���� ���� ��ų �� ����
	// ��, ����� ������ �� �޴´�.
	// ����� ���ÿ� �ʱ�ȭ
	const int b = 20;

	// const int c; // �ʱ�ȭ�� ������ �ʾƼ� ����

	a = 30;
	// b = 40; // �ʱ�ȭ���� �� ���� �ȵ�.

	a = b + 10;

	// 30 = 30; // ������, ��� = ���ͷ�;

	const int month = 12;
	const float PI = 3.14f;
	printf("%d %d\n", a, b);
}

void main()
{
	srand((unsigned)time(NULL));

	func25();
}