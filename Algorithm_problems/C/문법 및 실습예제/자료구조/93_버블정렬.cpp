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

void func93_1() { // �������� Ʋ
	int num = 6;

	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < num - 1 - i; j++) {
			printf("[%d %d] ", j, j + 1);
		}printf("\n");
	}
}

void func93_2() {// ��������, �����Ҽ��� �ӵ� ������
	int *ar;
	int num = 5;
	ar = new int[num];

	for (int i = 0; i < num; i++) { // ������ �Է�
		ar[i] = rand() % 100;
	}
	for (int i = 0; i < num; i++) { // �迭 ���
		printf("%d ", ar[i]);
	}printf("\n");
	printf("\n");
	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < num - 1 - i; j++) {
			if (ar[j] > ar[j + 1]) {
				int temp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = temp;
			}
			/*for (int i = 0; i < num; i++) {
				printf("%d ", ar[i]);
			}*/
		}printf("\n");
	}printf("\n");
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}
}

void main()
{
	srand((unsigned)time(NULL));

	//func93_1();
    func93_2();
}