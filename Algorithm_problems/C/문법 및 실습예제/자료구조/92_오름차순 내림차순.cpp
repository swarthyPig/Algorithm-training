#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func92(int num) {
	int *ar;
	ar = new int[num];

	for (int i = 0; i < num; i++) {
		ar[i] = rand() % 100;
	}
	printf("원본 : ");
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");

	printf("\n");

	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++)
		{
			if (ar[i] > ar[j]) {
				int temp;
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
	printf("오름차순 : ");
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");

	printf("\n");

	for (int i = 0; i < num / 2; i++) {
		int temp;
		temp = ar[i];
		ar[i] = ar[num - i - 1];
		ar[num - i - 1] = temp;
	}
	printf("내림차순 : ");
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");

	printf("\n");
	delete[]ar;
}

void main()
{
	srand((unsigned)time(NULL));

	func92(10);
}