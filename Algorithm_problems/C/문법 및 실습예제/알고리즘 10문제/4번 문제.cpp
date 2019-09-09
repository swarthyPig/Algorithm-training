#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void ex04() {
	printf("[4번 문제]\n");
	/*
	01 02 03 04 05
	02 03 04 05 01
	03 04 05 01 02
	04 05 01 02 03
	05 01 02 03 04
	*/
	for (int i = 0, k = 1; i < 5; i++, k++) { // 세로, k는 1부터 1씩 증가
		for (int j = 0; j < 5; j++, k++) { // 가로
			printf("%02d ", k);
			if (k == 5) { // k가 05가 되면
			    k = 0; // 0으로 초기화
			}
		}printf("\n");
	}
}

void main()
{
	srand((unsigned)time(NULL));

	ex04();
}