#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// SWAP 함수안의 a와 b는 교환되었지만 n6과 n7은 교환되지않음 call by value
void func18(int a, int b) {
	int t;
	printf("%d %d\n", a, b);
	t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);
}

void main()
{
	srand((unsigned)time(NULL));

	int n6 = 10, n7 = 20;
	printf("%d %d\n", n6, n7);
	func18(n6, n7);
	printf("%d %d\n", n6, n7);
	printf("\n");
}