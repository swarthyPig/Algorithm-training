#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void ex10() {
	printf("[10번 문제]\n");
	int su = 0;
	// rand() % n : 0~n-1 범위의 난수 생성
	// (rand() % n) +1 : 1~n 범위의 난수 생성
	for (int i = 0; i < 10; i++) {
		su = (rand() % 2) + 1; // 1~2사이 출력
		if (su == 1) {
			printf("o ");
		}
		else {
			printf("x ");
		}
	}

}

void main()
{
	srand((unsigned)time(NULL));

	ex10();
}