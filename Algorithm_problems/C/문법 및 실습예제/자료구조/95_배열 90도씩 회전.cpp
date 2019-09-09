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

void func95() {
	int ar[4][4];
	int br[4][4];
	int cr[4][4];
	int dr[4][4];

	// ar
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			ar[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %2d ", ar[i][j]);
		}printf("\n");
	}printf("\n");

	//br
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			//printf("[%d %d]",3-j,i);
			br[i][j] = ar[3 - j][i];
		}printf("\n");
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %2d ", br[i][j]);
		}printf("\n");
	}printf("\n");

	//cr
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			//printf("[%d %d]",3-i, 3-j);
			cr[i][j] = ar[3 - i][3 - j];
		}printf("\n");
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %2d ", cr[i][j]);
		}printf("\n");
	}printf("\n");

	//dr
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			//printf("[%d %d]",j, 3-i);
			dr[i][j] = ar[j][3 - i];
		}printf("\n");
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %2d ", dr[i][j]);
		}printf("\n");
	}printf("\n");

}

void main()
{
	srand((unsigned)time(NULL));

    func95();
}