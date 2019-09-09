#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// * 단출력
void func05(int su) {
	printf("%d단 입니다\n", su);
	for (int i = 1; i <= 10; i++) {
		printf("%d * %d = %02d\n", su, i, i * su);
	}printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func05(99);
}