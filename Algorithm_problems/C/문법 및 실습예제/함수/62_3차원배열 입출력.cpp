#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func62() {
	int ar[2][3][4]; // 총 메모리 개수는 24개

	for (int i = 0, ct = 0; i < 2; i++) { // 입력
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++, ct++) {
				ar[i][j][k] = ct;
			}
		}
	}

	for (int i = 0; i < 2; i++) { // 출력
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				printf("%02d ", ar[i][j][k]);
			}printf("\n");
		}
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func62();
}