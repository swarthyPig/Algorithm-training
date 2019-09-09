#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 삼항연산
void func33() {
	int a = 4, b = 3, c;

	// 삼항 연산으로 바뀐다.
	if (a > b) {
		c = 10;
	}
	else {
		c = 20;
	}

	printf("%d\n", c);

	c = (a > b ? 10 : 20);
	printf("%d\n", c);

	c = (a < b ? 10 : 20);
	printf("%d\n", c);

	if (a > b) {
		printf("%s\n", "호랑이");
	}
	else {
		printf("%s\n", "코끼리");
	}

	printf("%s\n", (a > b ? "호랑이" : "코끼리"));

	c = (a > b ? 10 : ((a + 10) < 50 ? 20 : 30));
	printf("%d\n", c);
}


void main()
{
	srand((unsigned)time(NULL));

	func33();
}