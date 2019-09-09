#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void ex01() {
	printf("[1번 문제]\n");
	/*
	   * * * *
	   * * * *
	   * * * *
	*/
	for (int i = 0; i < 3; i++) {  // 세로
		for (int j = 0; j < 4; j++) { // 가로
			printf("* ");
		}printf("\n");
	}printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	ex01();
}