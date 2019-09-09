#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// void func01() : 함수원형(Function Prototype) 
// 5단출력
void func01() {
	for (int i = 1; i <= 10; i++) {
		printf("5 * %d = %02d\n", i, i * 5);
	}printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func01();
}