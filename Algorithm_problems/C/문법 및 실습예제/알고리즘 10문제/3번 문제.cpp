#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void ex03() {
	printf("[3�� ����]\n");
	/*
	* 0 0 0 *
	0 * 0 * 0
	0 0 * 0 0
	0 * 0 * 0
	* 0 0 0 *
	*/

	/* Ǯ�̿�
	00 01 02 34 04
	10 11 12 13 14
	20 21 22 23 24
	30 31 32 33 34
	40 41 42 43 44

	*�� �� �ڸ��� 00 04, 11 13, 22, 31 33, 40 44
	*/
	for (int i = 0, k1 = 0, k2 = 4; i < 5; i++, k1++, k2--) { // k1�� 0���� 1�� ����, k2�� 4���� 1�� ����
		for (int j = 0; j < 5; j++) {
			if (k1 == j || k2 == j) {
				printf("* ");
			}
			else {
				printf("0 ");
			}

		}printf("\n");
	}
}

void main()
{
	srand((unsigned)time(NULL));

	ex03();
}