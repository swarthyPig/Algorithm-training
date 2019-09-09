#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 두 변수의 값을 교환하는 프로그램(SWAP)
void func11() {
	int a = 30, b = 50;
	printf("%d%d\n", a, b);
	int t = a; // t = 30
	a = b; // a = 50	
	b = t; // b = 30

	printf("%d%d\n", a, b);
}

void main()
{
	srand((unsigned)time(NULL));

	func11(); 
	//int n2 = func11(); 리턴값이 없어서 안됨
	//printf("%d\n", n2);
}