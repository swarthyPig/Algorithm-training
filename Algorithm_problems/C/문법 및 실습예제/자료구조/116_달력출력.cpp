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

void func116() { // �޷����
	int month[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int initDay = 2; // 2019, ��(0) ~ ��(6) 1��1���� ���� ����

	for (int i = 0; i < 12; i++) { // 1���� 12��
		printf("\n");
		printf("- %d ���� �޷� -\n", i + 1); // �� �� ���
		// ��(0) ~ ��(6)
		printf("�� �� ȭ �� �� �� ��\n");

		for (int j = 0; j < initDay; j++) { // ù�� �������(���� ����)
			printf("   ");
		}

		for (int k = 0; k < month[i]; k++) { // ù°������ ������������
			printf("%2d ", k + 1);
			if ((initDay + k) % 7 == 6) { // (���� + �ϼ�)�ٹٲ� 
				printf("\n");
			}
		}

		initDay = (initDay + month[i]) % 7; // �� ���� ���� ���� ������ ���
		printf("\n");
	}
}

void main() {
	srand((unsigned)time(NULL));

	func116();
}