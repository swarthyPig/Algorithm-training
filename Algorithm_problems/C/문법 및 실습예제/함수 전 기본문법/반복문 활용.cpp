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

	for (int i = 0; i < 4; i++) { // ����
		for (int j = 0; j < 6; j++) {// ����
				      //printf("* ");
			printf("%02d ", i * 6 + j);
		}printf("\n");
	}printf("\n");

	for (int i = 0; i < 4; i++) { // ����
		printf("ȣ����\n");
		for (int j = 0; j < 6; j++) {// ����
				      //printf("* ");
			printf("%02d ", i * 6 + j);
		}printf("\n");
		printf("�ڳ���");
	}printf("\n");

	for (int i = 0; i < 4; i++) { // ����
		for (int j = 0; j < 6; j++) {// ����
			printf("[%d %d]", i, j);
		}printf("\n");
	}printf("\n");

	for (int i = 0, k = 0; i < 4; i++) { // ����
		for (int j = 0; j < 6; j++, k++) {// ����
			printf("%02d ", k);
		}printf("\n");
	}printf("\n");
}