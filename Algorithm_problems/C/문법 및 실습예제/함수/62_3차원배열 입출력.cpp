#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func62() {
	int ar[2][3][4]; // �� �޸� ������ 24��

	for (int i = 0, ct = 0; i < 2; i++) { // �Է�
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++, ct++) {
				ar[i][j][k] = ct;
			}
		}
	}

	for (int i = 0; i < 2; i++) { // ���
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				printf("%02d ", ar[i][j][k]);
			}printf("\n");
		}
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func62();
}