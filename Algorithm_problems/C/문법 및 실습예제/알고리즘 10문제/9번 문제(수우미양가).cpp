#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void ex09() {
	printf("[9번 문제]\n");
	int su = 0;
	for (int i = 0; i < 10; i++) {
		su = rand() % 100;
		printf("%02d  ", su);

		int div = 0;
		if (su < 10) {
			div = su;
		}
		else {
			div = su / 10;
		}

		for (int j = 0; j < div; j++) {
			printf("* ");
		}
		if (su > 90) {
			printf("수\n");
		}
		else if (su > 80) {
			printf("우\n");
		}
		else if (su > 70) {
			printf("미\n");
		}
		else if (su > 60) {
			printf("양\n");
		}
		else {
			printf("가\n");
		}
	}
	printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	ex09();
}