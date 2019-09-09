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

void func96() {
	int ar[10] = { 2, 3, 9, 8, 7, 4, 10, 20, 30, 7 };

	for (int i = 0; i < 10; i++) {
		printf("%2d ", ar[i]);
	}printf("\n");

	for (int i = 0; i < 10; i++) {
		if (ar[5 - i] < ar[4 - i]) {
			int temp;
			temp = ar[5 - i];
			ar[5 - i] = ar[4 - i];
			ar[4 - i] = temp;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%2d ", ar[i]);
	}
}

void main()
{
	srand((unsigned)time(NULL));

    func96();
}