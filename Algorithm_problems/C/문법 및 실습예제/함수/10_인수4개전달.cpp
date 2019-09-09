#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 인수 4개 전달 받는 함수(문자)
void func10(int a, char b, int c, char d) {
	printf("%d %c %d %c\n", a, b, c, d);
}

void main()
{
	srand((unsigned)time(NULL));

	func10(65, 'A', 'A', 65);
}