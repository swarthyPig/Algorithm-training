#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// ���׿���
void func33() {
	int a = 4, b = 3, c;

	// ���� �������� �ٲ��.
	if (a > b) {
		c = 10;
	}
	else {
		c = 20;
	}

	printf("%d\n", c);

	c = (a > b ? 10 : 20);
	printf("%d\n", c);

	c = (a < b ? 10 : 20);
	printf("%d\n", c);

	if (a > b) {
		printf("%s\n", "ȣ����");
	}
	else {
		printf("%s\n", "�ڳ���");
	}

	printf("%s\n", (a > b ? "ȣ����" : "�ڳ���"));

	c = (a > b ? 10 : ((a + 10) < 50 ? 20 : 30));
	printf("%d\n", c);
}


void main()
{
	srand((unsigned)time(NULL));

	func33();
}