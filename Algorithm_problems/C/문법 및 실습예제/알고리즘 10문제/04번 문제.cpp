#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void ex04() {
	printf("[4�� ����]\n");
	/*
	01 02 03 04 05
	02 03 04 05 01
	03 04 05 01 02
	04 05 01 02 03
	05 01 02 03 04
	*/
	for (int i = 0, k = 1; i < 5; i++, k++) { // ����, k�� 1���� 1�� ����
		for (int j = 0; j < 5; j++, k++) { // ����
			printf("%02d ", k);
			if (k == 5) { // k�� 05�� �Ǹ�
			    k = 0; // 0���� �ʱ�ȭ
			}
		}printf("\n");
	}
}

void main()
{
	srand((unsigned)time(NULL));

	ex04();
}