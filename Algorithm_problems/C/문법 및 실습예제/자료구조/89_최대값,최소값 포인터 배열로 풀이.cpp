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

void func89_1() {
	//int rn = rand() % 100;
	//printf("%d", rn);

	int ar[10];

	for (int i = 0; i < 10; i++) { // ����
		ar[i] = rand() % 100;
	}

	for (int i = 0; i < 10; i++) { // ���
		printf("%d ", ar[i]);
	}printf("\n");


	int max = 0;
	for (int i = 0; i < 10; i++) { // �迭���鼭 max�� �ִ밪 �ֱ�
		if (max < ar[i]) {
			max = ar[i];
		}
	}
	printf("%d\n", max);

	int min = ar[0];
	for (int i = 0; i < 10; i++) { // ar�� 0�� ���ڸ� ����
		if (min > ar[i]) {
			min = ar[i];
		}
	}
	printf("%d\n", min);

	int n1 = 0;
	for (int i = 0; i < 10; i++) { // �ִ밪
		if (n1 < ar[i]) {
			n1 = ar[i];
		}
	}

	int n2 = INT_MAX;
	for (int i = 0; i < 10; i++) { // �ּҰ�
		if (n2 > ar[i]) {
			n2 = ar[i];
		}
	}
}

void func89_2() {

	int max = 0;
	int min = INT_MAX;
	for (int i = 0; i < 10; i++) {
		int rn = rand() % 100;
		printf("%d ", rn);
		if (max < rn) {
			max = rn;
		}
		if (min > rn) {
			min = rn;
		}
	}printf("\n");
	printf("�ִ밪 : %d �ּҰ� : %d\n", max, min);
}

void func89_3(int num) {
	int *ar = new int[num];

	for (int i = 0; i < num; i++) {
		ar[i] = rand() % 100;
	}

	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");

	int max = 0;
	int min = INT_MAX;
	for (int i = 0; i < num; i++) {
		if (max < ar[i]) {
			max = ar[i];
		}
		if (min > ar[i]) {
			min = ar[i];
		}
	}printf("�ִ밪 : %d �ּҰ� : %d\n", max, min);

	delete[]ar;
}

void func89_4() {
	//printf("%d\n",INT_MAX);

	int ar[5][8];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 8; j++)
		{
			ar[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 8; j++)
		{
			printf("%3d ", ar[i][j]);
		}printf("\n");
	}

	int max = 0;
	int min = INT_MAX;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 8; j++) {
			if (max < ar[i][j]) {
				max = ar[i][j];
			}
			if (min > ar[i][j]) {
				min = ar[i][j];
			}
		}
	}printf("�ִ밪 : %d �ּҰ� : %d\n", max, min);
}

void func89_5(int w, int h) { // 8,5 ��� �����ϸ� 4���̶� ��� ����

	int **ar;
	ar = new int *[h];

	for (int i = 0; i < h; i++) {
		ar[i] = new int[w];
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++)
		{
			ar[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++)
		{
			printf("%3d ", ar[i][j]);
		}printf("\n");
	}

	int max = 0;
	int min = INT_MAX;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (max < ar[i][j]) {
				max = ar[i][j];
			}
			if (min > ar[i][j]) {
				min = ar[i][j];
			}
		}
	}printf("�ִ밪 : %d �ּҰ� : %d\n", max, min);

	for (int i = 0; i < h; i++) {
		delete[]ar[i];
	}
	delete[]ar;
}

void main()
{
	srand((unsigned)time(NULL));

	func89_1();
	func89_2();
	func89_3(20);
	func89_4();
	func89_5(8, 5);
}