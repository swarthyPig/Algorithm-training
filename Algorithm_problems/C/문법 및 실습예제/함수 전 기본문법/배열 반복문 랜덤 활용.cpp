#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u
void main()
{
	srand((unsigned)time(NULL));

	int ar[10];
	for (int i = 0; i < 10; i++) { // �Է�
		ar[i] = rand() % 100; // 1~100������ ���� ��
	}

	for (int i = 0; i < 10; i++) { // ���
		printf("%d ", ar[i]);
	}printf("\n");

	/*
	0 0 0 0
	0 0 0 0
	0 0 0 0
	*/
	int br[3][4]; // ���� 3�� ���� 4�� 

	for (int i = 0; i < 3; i++) { // ����
		for (int j = 0; j < 4; j++) {// ����
			br[i][j] = rand() % 10; // 1~10������ ���� ��
		}printf("\n");
	}printf("\n");

	for (int i = 0; i < 3; i++) { // ����
		for (int j = 0; j < 4; j++) {// ����
			printf("%2d ", br[i][j]);
		}printf("\n");
	}printf("\n");


	for (int i = 0, r = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			r += br[j][i];
		}printf("%d ", r);
	}printf("\n");
	//[0 0] [0 1] [0 2] [0 3]
	//[1 0] [1 1] [1 2] [1 3]
	//[2 0] [2 1] [2 2] [2 3]

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("[%d %d] ", i, j);
		}printf("\n");
	}printf("\n");

	for (int i = 0; i < 4; i++) {
		int r = 0;
		for (int j = 0; j < 3; j++) {
			r += br[j][i];
		}printf("%2d ", r);
	}printf("\n");

}