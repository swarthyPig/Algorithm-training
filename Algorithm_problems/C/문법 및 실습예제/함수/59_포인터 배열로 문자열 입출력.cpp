#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func59() {
	const char *p[] = {
		"호랑이",
		"코끼리",
		"앵무새"
	};
	for (int i = 0; i < 3; i++) {
		printf("%s\n", p[i]);
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func59();
}