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

void func91() {
	int *ar;
	int num = 5;
	ar = new int[num];

	for (int i = 0; i < num; i++) {
		ar[i] = rand() % 100;
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			printf("[%d,%d] ", i, j);
		}printf("\n");
	}printf("\n");

	for (int i = 0; i < num; i++) {

		for (int j = i + 1; j < num; j++) {
			printf("[%d,%d] ", i, j);
		}printf("\n");
	}printf("\n");

	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");
	printf("\n");

	int count = 0;
	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++) {
			count++;
			if (ar[i] > ar[j]) {
				int temp;
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
			for (int j = 0; j < num; j++) {
				printf("%d ", ar[j]);
			}printf("\n");
		}printf("\n");
		for (int i = 0; i < num; i++) {
			printf("%d ", ar[i]);
		}printf("\n");
	}printf("\n");

	printf("%d\n", count);
	// �̹� ���� ������ �� ���¿��� ���� ������ �ϰ� ���� ��(n*(n-1)/2 -> �ݺ�Ƚ��)
	for (int i = 0; i < num / 2; i++) {
		int temp;
		temp = ar[i];
		ar[i] = ar[num - 1 - i];
		ar[num - 1 - i] = temp;
	}
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func91();
}