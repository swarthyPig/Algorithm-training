#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 인수 2개 전달 받는 함수
void func08(int a, int b) { // void func08(int a, b)()잘못된 문법
	printf("%d\n", a + b);
}

void main()
{
	srand((unsigned)time(NULL));

	func08(10, 20);
}