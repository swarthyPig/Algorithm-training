#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u
void main()
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 4; i++) { // 세로
		for (int j = 0; j < 6; j++) {// 가로
				      //printf("* ");
			printf("%02d ", i * 6 + j);
		}printf("\n");
	}printf("\n");

	for (int i = 0; i < 4; i++) { // 세로
		printf("호랑이\n");
		for (int j = 0; j < 6; j++) {// 가로
				      //printf("* ");
			printf("%02d ", i * 6 + j);
		}printf("\n");
		printf("코끼리");
	}printf("\n");

	for (int i = 0; i < 4; i++) { // 세로
		for (int j = 0; j < 6; j++) {// 가로
			printf("[%d %d]", i, j);
		}printf("\n");
	}printf("\n");

	for (int i = 0, k = 0; i < 4; i++) { // 세로
		for (int j = 0; j < 6; j++, k++) {// 가로
			printf("%02d ", k);
		}printf("\n");
	}printf("\n");
}