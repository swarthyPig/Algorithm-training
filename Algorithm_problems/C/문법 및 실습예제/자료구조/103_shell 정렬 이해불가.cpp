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

void func103() { // shell���� ���ĵǾ������� �ӵ��� �ſ������
	int *ar;
	int num = 20;
	ar = new int[num];
	int h = 4;
	int br[3] = { 4,2,1 };

	for (int i = 0; i < num; i++) {
		ar[i] = rand() % 100;
	}
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");

	for (int k = 0; k < h; k++) { // fix
								  //h = br[k];
		for (int i = 0; i < (num / h) - 1; i++) {
			for (int j = 0; j < i + 1; j++) {
				//printf("[%2d %2d]", (i - j) * h + k, (i + 1) * h + k);
				if (ar[(i - j) * h + k] > ar[(i + 1) * h + k]) {
					int temp = ar[(i - j) * h + k];
					ar[(i - j) * h + k] = ar[(i + 1) * h + k];
					ar[(i + 1) * h + k] = temp;
				}
			}
		}
	}
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func103();
}