#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// a의 b승
void func09(int a, int b) { // a=3, b=5 를 받음 
	int s = 1;
	for (int i = 0; i < b; i++) {
		s *= a;
	}
	printf("%d\n", s);
}

void main()
{
	srand((unsigned)time(NULL));

	func09(2, 8);
}