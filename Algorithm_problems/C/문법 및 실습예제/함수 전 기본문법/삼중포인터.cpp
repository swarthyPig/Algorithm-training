

	
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

	// 3�� ������ ���� ��������

	int ar[2][3][4]; // ����4�� ����3���� �׸� 2��(����)�� �Ϲ� �迭

	for (int i = 0, ct = 0; i < 2; i++) { // �Է�
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++, ct++) {
				ar[i][j][k] = ct;
			}
		}
	}
	for (int i = 0, ct = 0; i < 2; i++) { // ���
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++, ct++) {
				printf("%2d ", ar[i][j][k]);
			}printf("\n");
		}printf("\n");
	}

	// 3�� ������ �迭
	int ***ptr; // 2��(����)->3��->4�� ����
	ptr = new int **[2]; // ���� �Ҵ�

	for (int i = 0; i < 2; i++) { // ���� �Ҵ�
		ptr[i] = new int *[3];
	}

	for (int i = 0; i < 2; i++) { // ���� �Ҵ�
		for (int j = 0; j < 3; j++) {
			ptr[i][j] = new int[4];
		}
	}

	for (int i = 0, ct = 0; i < 2; i++) { // �Է�
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++, ct++) {
				ptr[i][j][k] = ct;
			}
		}
	}
	for (int i = 0, ct = 0; i < 2; i++) { // ���
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++, ct++) {
				printf("%2d ", ptr[i][j][k]);
			}printf("\n");
		}printf("\n");
	}

	// �޸� ��ȯ �ÿ��� �Ųٷ� ��
	for (int i = 0; i < 2; i++) { // ����, ���� ��ȯ
		for (int j = 0; j < 3; j++) {
			delete[]ptr[i][j];
		}
	}

	for (int i = 0; i < 2; i++) { // ���� ��ȯ
		delete[]ptr[i];
	}

	delete[]ptr; // ������ ��ȯ
}


