#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 1~10까지 더하는 합산 프로그램
void func02() {
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("%d\n", sum);
}

void main()
{
	srand((unsigned)time(NULL));

	func02();
}