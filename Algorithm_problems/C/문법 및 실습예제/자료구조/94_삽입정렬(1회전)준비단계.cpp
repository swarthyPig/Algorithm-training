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

void func94() { // 삽입정렬(1회전)
	int *ar;
	int num = 5;
	ar = new int[num];

	for (int i = 0; i < num; i++) {
		ar[i] = rand() % 100;
	}
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");

	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < i + 1; j++) {
			//printf("[%d %d]", i-j, i+1);

			if (ar[i - j] > ar[i + 1]) {
				int temp = ar[i - j];
				ar[i - j] = ar[i + 1];
				ar[i + 1] = temp;
			}
			for (int i = 0; i < num; i++) {
				printf("%d ", ar[i]);
			}
		}printf("\n");
	}
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}
}

void main()
{
	srand((unsigned)time(NULL));

    func94();
}