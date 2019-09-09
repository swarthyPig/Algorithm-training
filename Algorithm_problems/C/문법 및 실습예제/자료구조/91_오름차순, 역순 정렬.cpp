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

void func91() {
	int *ar;
	int num = 5;
	ar = new int[num];

	for (int i = 0; i < num; i++) {
		ar[i] = rand() % 100;
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			printf("[%d,%d] ", i, j);
		}printf("\n");
	}printf("\n");

	for (int i = 0; i < num; i++) {

		for (int j = i + 1; j < num; j++) {
			printf("[%d,%d] ", i, j);
		}printf("\n");
	}printf("\n");

	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");
	printf("\n");

	int count = 0;
	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++) {
			count++;
			if (ar[i] > ar[j]) {
				int temp;
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
			for (int j = 0; j < num; j++) {
				printf("%d ", ar[j]);
			}printf("\n");
		}printf("\n");
		for (int i = 0; i < num; i++) {
			printf("%d ", ar[i]);
		}printf("\n");
	}printf("\n");

	printf("%d\n", count);
	// 이미 순차 정렬이 된 상태에서 역순 정렬을 하고 싶을 때(n*(n-1)/2 -> 반복횟수)
	for (int i = 0; i < num / 2; i++) {
		int temp;
		temp = ar[i];
		ar[i] = ar[num - 1 - i];
		ar[num - 1 - i] = temp;
	}
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func91();
}