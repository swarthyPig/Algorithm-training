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

void func99() { // �������� ��������
	int *ar;
	int num = 10;
	ar = new int[num];

	for (int i = 0; i < num; i++) {
		ar[i] = rand() % 100;
	}

	for (int i = 0; i < num; i++) {
		printf("%3d ", ar[i]);
	}printf("\n");

	for (int i = 0; i < num; i++) {
		int temp = ar[i];
		int j;
		for (j = 0; j < i; j++) {
			if (ar[i - 1 - j] < temp) {
				break;
			}
			ar[i - j] = ar[i - 1 - j];
		}
		ar[i - j] = temp;
	}

	for (int i = 0; i < num; i++) {
		printf("%3d ", ar[i]);
	}printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func99();
}