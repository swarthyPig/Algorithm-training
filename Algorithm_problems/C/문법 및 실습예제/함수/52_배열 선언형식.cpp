#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func52() {
	int ar[5];
	int br[5] = { 0, }; // �����Ͱ� ���� 0���� ä����, ',' �� ���̴°� ǥ��
	int cr[5] = { 0, 1, 2, 3, 4 };
	int dr[] = { 0, 1, 2, 3, 4 };
	int er[3][4] = { 0, };
	int fr[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	int gr[3][4] = { // ����
		{ 0, 1, 2, 3 },
	    { 4, 5, 6, 7 },
		{ 8, 9, 10, 11 },
	};
	for (int i = 0; i < 3; i++) { // �迭 gr ���
		for (int j = 0; j < 4; j++) {
			printf("%02d ", gr[i][j]);
		}printf("\n");

	}
}

void main()
{
	srand((unsigned)time(NULL));

	func52();
}