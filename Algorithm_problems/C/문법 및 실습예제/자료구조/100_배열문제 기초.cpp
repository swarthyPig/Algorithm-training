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

void func100_1() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("* ");
		}printf("\n");
	}printf("\n");
}

void func100_2() {
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%02d", cnt);
			cnt++;
		}printf("\n");
	}printf("\n");
}

void func100_3() {
	char cnt = 'A';
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%c ", cnt);
			cnt++;
		}printf("\n");
	}printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func100_1();
	func100_2();
	func100_3();
}