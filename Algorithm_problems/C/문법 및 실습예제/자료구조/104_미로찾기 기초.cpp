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

void func104() {
	char ar[5][6];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			ar[i][j] = '.';
		}
	}
	int ct = 0;
	while (true) {
		int w = rand() % 6; // 0~6
		int h = rand() % 5; // 0~5

		if (ar[h][w] == '0') {
			continue;
		}

		ar[h][w] = '0';

		if (++ct == 6) { // 6번 수행
			break;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%c ", ar[i][j]);
		}printf("\n");
	}printf("\n");
}

void func104_1() {
	char ar[5][6];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++)
			ar[i][j] = '.';
	}
	int ct = 0;
	while (true) {
		int w = rand() % 6; // width
		int h = rand() % 5; // heigth

		if (ar[h][w] == '0')
			continue;

		if (ct == 6)
			break;

		ar[h][w] = '0';

		ct++;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++)
			printf("%c ", ar[i][j]);
		printf("\n");
	}
}

void func104_2() {
	char ar[5][6];
	char br[3][4];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++)
			ar[i][j] = '.';
	}

	int ct = 0;
	while (true) {
		int w = rand() % 6; // width
		int h = rand() % 5; // heigth

		if (((w == 0 || w == 5) || (h == 0 || h == 4))) {
			continue;
		}
		if (ar[h][w] == '0')
			continue;

		if (ct == 6)
			break;

		ar[h][w] = '0';

		ct++;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++)
			printf("%c ", ar[i][j]);
		printf("\n");
	}printf("\n");


	for (int i = 1; i < 5 - 1; i++) {
		for (int j = 1; j < 6 - 1; j++) {
			if (ar[i][j] == '0') {
				printf("99 ");
				continue;
			}
			int cnt = 0;
			for (int k = 0; k < 3; k++) {
				for (int z = 0; z < 3; z++) {
					if (ar[i - 1 + k][j - 1 + z] == '0') {
						cnt++;
					}
				}
			}
			printf("%02d ", cnt);
		}
		printf("\n");
	}
}

void func104_3() {
	int x = 7;
	int y = 2;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((j - i == x - y) || ((i + j) == (x + y))) {
				printf("0 ");
				continue;
			}
			printf(". ");
		}
		printf("\n");
	}
}

void func104_4() {
	int x = 3;
	int y = 5;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((j == x) || (i == y)) {
				printf("0 ");
				continue;
			}
			printf(". ");
		}
		printf("\n");
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func104();
	printf("\n");
	func104_1();
	printf("\n");
	func104_2();
	printf("\n");
	func104_3();
	printf("\n");
	func104_4();
	
}