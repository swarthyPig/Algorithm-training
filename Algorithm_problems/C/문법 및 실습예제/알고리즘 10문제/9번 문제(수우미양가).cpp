#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void ex09() {
	printf("[9�� ����]\n");
	int su = 0;
	for (int i = 0; i < 10; i++) {
		su = rand() % 100;
		printf("%02d  ", su);

		int div = 0;
		if (su < 10) {
			div = su;
		}
		else {
			div = su / 10;
		}

		for (int j = 0; j < div; j++) {
			printf("* ");
		}
		if (su > 90) {
			printf("��\n");
		}
		else if (su > 80) {
			printf("��\n");
		}
		else if (su > 70) {
			printf("��\n");
		}
		else if (su > 60) {
			printf("��\n");
		}
		else {
			printf("��\n");
		}
	}
	printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	ex09();
}