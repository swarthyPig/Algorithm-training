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

void rhombus() {
	printf("[7_1�� ����]\n");

	// 5*5 ����
	for (int i = 0; i < 5; i++) { // ����
		for (int j = 0; j < 5; j++) { // ����
			printf("* ");
		}printf("\n");
	}printf("\n");

	// 5*5 ����
	for (int i = -2; i <= 2; i++) { // ����
		for (int j = -2; j <= 2; j++) { // ����
			printf("* ");
		}printf("\n");
	}printf("\n");

	// 5*5 ���ڰ����� ����
	for (int i = -2; i <= 2; i++) {
		for (int j = -2; j <= 2; j++) {
			printf("[%+2d %+2d] ", i, j);
		}printf("\n");
	}printf("\n");

	for (int i = -2; i <= 2; i++) {
		for (int j = -2; j <= 2; j++) {
			int a = i;
			int b = j;

			if (a < 0) { // a�� i�� �����̸� ����� �ٲ�
				a = -a;
			}
			if (b < 0) { // b�� j�� �����̸� ����� �ٲ�
				b = -b;
			}
			if (a + b <= 2) { // a+b�� 2���ϸ� *�� ���
				printf("* ");
			}
			else {
				printf("  ");
			}
			printf("[%+2d %+2d] ", a, b);
		}printf("\n");
	}printf("\n");

	int input;
	scanf("%d", &input);
	int num = input / 2; //�� ���α׷��� Ư���� Ȧ���� �Է��Ѵ�.
	for (int i = -num; i <= num; i++) {
		for (int j = -num; j <= num; j++) {
			int a = i;
			int b = j;
			if (a < 0) {
				a = -a;
			}
			if (b < 0) {
				b = -b;
			}
			/*if (a + b <= num) {
			printf("* ");
			}
			else {
			printf("  ");
			}*/
			printf("%c ", a + b <= num ? '*' : ' ');
			//printf("[%+2d %+2d] ", a, b);
		}printf("\n");
	}
}

void main()
{
	srand((unsigned)time(NULL));

	rhombus();
}v