#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void ex10() {
	printf("[10�� ����]\n");
	int su = 0;
	// rand() % n : 0~n-1 ������ ���� ����
	// (rand() % n) +1 : 1~n ������ ���� ����
	for (int i = 0; i < 10; i++) {
		su = (rand() % 2) + 1; // 1~2���� ���
		if (su == 1) {
			printf("o ");
		}
		else {
			printf("x ");
		}
	}

}

void main()
{
	srand((unsigned)time(NULL));

	ex10();
}