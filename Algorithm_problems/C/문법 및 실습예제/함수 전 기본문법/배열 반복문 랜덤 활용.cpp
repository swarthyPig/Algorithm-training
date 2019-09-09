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

	int ar[10];
	for (int i = 0; i < 10; i++) { // 입력
		ar[i] = rand() % 100; // 1~100까지의 랜덤 수
	}

	for (int i = 0; i < 10; i++) { // 출력
		printf("%d ", ar[i]);
	}printf("\n");

	/*
	0 0 0 0
	0 0 0 0
	0 0 0 0
	*/
	int br[3][4]; // 세로 3개 가로 4개 

	for (int i = 0; i < 3; i++) { // 세로
		for (int j = 0; j < 4; j++) {// 가로
			br[i][j] = rand() % 10; // 1~10까지의 랜덤 수
		}printf("\n");
	}printf("\n");

	for (int i = 0; i < 3; i++) { // 세로
		for (int j = 0; j < 4; j++) {// 가로
			printf("%2d ", br[i][j]);
		}printf("\n");
	}printf("\n");


	for (int i = 0, r = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			r += br[j][i];
		}printf("%d ", r);
	}printf("\n");
	//[0 0] [0 1] [0 2] [0 3]
	//[1 0] [1 1] [1 2] [1 3]
	//[2 0] [2 1] [2 2] [2 3]

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("[%d %d] ", i, j);
		}printf("\n");
	}printf("\n");

	for (int i = 0; i < 4; i++) {
		int r = 0;
		for (int j = 0; j < 3; j++) {
			r += br[j][i];
		}printf("%2d ", r);
	}printf("\n");

}