#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func88_1() {
	printf("%d\n", abs(-5));
	printf("%d\n", abs(5));

	printf("%d\n", max(5, 3));
	printf("%d\n", min(5, 3));

	int a = 5;
	int b = 8;
	int c = 3;

	int _max = max(a, b); // 3���� �� �߿��� ���� ū���� ã�� ���α׷�
	_max = max(_max, c);
	printf("%d\n", _max);
}

int func88_2(int a, int b, int c) {

	int _max = max(a, b); // 3���� �� �߿��� ���� ū���� ã�� ���α׷�
	_max = max(_max, c);
	//printf("%d\n", _max);

	return _max;
}

void func88_3() { // 4���� �߿��� ���� ū �� ã��
	int a = 20;
	int b = 5;
	int c = 30;
	int d = 15;

	int n1 = max(a, b);
	int n2 = max(c, d);
	int result = max(n1, n2);

	printf("%d\n", max(max(a, b), max(c, d)));
}

int func88_4(int a, int b, int c, int d) { // 4���� �߿��� ���� ū �� ã��(����ó��)

	return max(max(a, b), max(c, d));

}

int func88_5() { // �߾Ӱ� ���
	int a = 3, b = 6, c = 9;

	if (a >= b) {
		if (b >= c) {
			return b;
		}
		else if (a <= c) {
			return a;
		}
		else {
			return c;
		}
	}
	else if (a > c) {
		return a;
	}
	else if (b > c) {
		return c;
	}
	else {
		return b;
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func88_1();
	printf("%d\n", func88_2(10, 5, 30));
	func88_3();
	printf("%d\n", func88_4(10, 5, 30, 50));
	printf("�߾Ӱ� %d ��\n", func88_5());
}