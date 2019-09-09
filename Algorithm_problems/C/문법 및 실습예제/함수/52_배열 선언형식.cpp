#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func52() {
	int ar[5];
	int br[5] = { 0, }; // 데이터가 전부 0으로 채워짐, ',' 을 붙이는게 표준
	int cr[5] = { 0, 1, 2, 3, 4 };
	int dr[] = { 0, 1, 2, 3, 4 };
	int er[3][4] = { 0, };
	int fr[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	int gr[3][4] = { // 정석
		{ 0, 1, 2, 3 },
	    { 4, 5, 6, 7 },
		{ 8, 9, 10, 11 },
	};
	for (int i = 0; i < 3; i++) { // 배열 gr 출력
		for (int j = 0; j < 4; j++) {
			printf("%02d ", gr[i][j]);
		}printf("\n");

	}
}

void main()
{
	srand((unsigned)time(NULL));

	func52();
}