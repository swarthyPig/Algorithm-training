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

void func102() {

	int num = 28;
	int h = 4;

	for (int k = 0; k < h; k++) { // fix
		for (int i = 0; i < (num / h) - 1; i++) { // 0, 1, 2, 3, 4, 5
			for (int j = 0; j < i + 1; j++) {
				printf("[%d %d]", (i - j) * h + k, (i + 1) * h + k);

			}printf("\n");
		}printf("\n");
	}

	/*int n = 20;
	for (int k = 0; k < 4; k++) {
		for (int i = 0; i < 4; i++) {// 3
			for (int j = 0; j < i + 1; j++) {// 0 1 2 3
				printf("[%d %d]", (i - j) * 4 + k, (i + 1) * 4 + k);
			}printf("\n");
		}printf("\n");
	}*/
}

void main()
{
	srand((unsigned)time(NULL));

	func102();
}