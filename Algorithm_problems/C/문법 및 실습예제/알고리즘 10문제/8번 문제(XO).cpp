#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void ex08() {
	printf("[8�� ����]\n");
	/*
	0 x 0 x 0
	x 0 x 0 x
	0 x 0 x 0
	x 0 x 0 x
	0 x 0 x 0
	*/
	int su1, su2;
	printf("���� �Է��Ͻÿ�.\n");
	scanf("%d", &su1);
	scanf("%d", &su2);

	for (int i = 0; i < su1; i++){
		for (int j = 0; j < su2; j++){
			printf("[%d %d]",i,j);
		}printf("\n");
	}printf("\n");

	for (int i = 0; i < su1; i++) {
		for (int j = 0; j < su2; j++) {
			if (i % 2 == 0) { // i�� ¦��
				if (j % 2 == 0) { // j�� ¦��
					printf("0 ");
				}
				else { // j�� Ȧ��
					printf("x ");
				}
			}
			else { // i�� Ȧ��
				if (j % 2 == 0) { // j�� ¦��
					printf("x ");
				}
				else { // j�� Ȧ��
					printf("0 ");
				}
			}

		}printf("\n");
	}
}

void main()
{
	srand((unsigned)time(NULL));

	ex08();
}