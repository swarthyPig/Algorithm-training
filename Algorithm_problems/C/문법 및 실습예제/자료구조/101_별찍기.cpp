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

void func101_1() {
	int n = 4;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf(" *");
		}printf("\n");
	}printf("\n");
}

void func101_2() {
	int n = 4;

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			printf(" *");
		}printf("\n");
	}printf("\n");
}

void func101_3() {
	int n = 7;
	int k = 0;

	for (int i = 0; i < n / 2 + 1; i++) {
		for (int j = 0; j < i; j++) {
			printf(". ");
		}
		for (int j = k; j < n; j++) {
			printf("* ");
		}
		k += 2;
		for (int j = 0; j < i; j++) {
			printf(". ");
		}printf("\n");
	}printf("\n");
}

void func101_4() {
	int n = 7;
	int k = 0;
	for (int i = 0; i < n / 2 + 1; i++) {
		for (int j = i; j < n / 2; j++) {
			printf(". ");
		}
		for (int j = n - k - 1; j < n; j++) {
			printf("* ");
		}
		k += 2;
		for (int j = i; j < n / 2; j++) {
			printf(". ");
		}printf("\n");
	}printf("\n");
}

void func101_5() { // ������

	int num = 5;
	int n = num / 2;

	for (int i = -n; i <= n; i++) {
		for (int j = -n; j <= n; j++) {

			int a = abs(i);
			int b = abs(j);

			printf("%c ", a + b <= n ? '*' : ' ');
		}printf("\n");
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func101_1();
	func101_2();
	func101_3();
	func101_4();
	func101_5();
}