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

void func98() { //�������� �κ� �ű� �غ�ܰ�
	int ar[10] = { 2, 3, 8, 9, 7, 6, 10, 20, 30, 40 };

	for (int i = 0; i < 10; i++) {
		printf("%3d ", ar[i]);
	}printf("\n");

	int n = 5;
	int temp = ar[n]; // 6
	printf("  temp : %d\n", temp);

	int i;
	for (i = 0; i < n; i++) { // 0, 1, 2, 3, 4 -> 5��
		//printf("%d%d \n", 5-1-i,5-i);// ��Ģ
		if (ar[n - 1 - i] < temp) { // else�� ��� ���� �ʱ� ����, if�� else�� �����ؾߴ�
			break; // �������� ��� ���ٰ� �ڱ⺸�� �������� ������ Ż��
		}
		ar[n - i] = ar[n - 1 - i];
	}
	ar[n - i] = temp;
	for (int i = 0; i < 10; i++) {
		printf("%3d ", ar[i]);
	}printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func98();
}