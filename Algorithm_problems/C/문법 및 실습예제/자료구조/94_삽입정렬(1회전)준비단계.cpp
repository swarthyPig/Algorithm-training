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

void func94() { // ��������(1ȸ��)
	int *ar;
	int num = 5;
	ar = new int[num];

	for (int i = 0; i < num; i++) {
		ar[i] = rand() % 100;
	}
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");

	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < i + 1; j++) {
			//printf("[%d %d]", i-j, i+1);

			if (ar[i - j] > ar[i + 1]) {
				int temp = ar[i - j];
				ar[i - j] = ar[i + 1];
				ar[i + 1] = temp;
			}
			for (int i = 0; i < num; i++) {
				printf("%d ", ar[i]);
			}
		}printf("\n");
	}
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}
}

void main()
{
	srand((unsigned)time(NULL));

    func94();
}