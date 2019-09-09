#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func42() {
	int a = 0;
	a++; // 이 코드 이후에 a는 1이된다.
	++a; // 이 코드 실행 이후 a는 2가된다.
	int b;
	b = a++; // 1.대입 2.증가
	// a == 3, b == 2
	printf("%d %d\n", a, b);
	b = ++a; // 1.증가 2.대입
	// 이때 a == 4, b == 4
	printf("%d %d\n", a, b);

	// b = (a++) + 2; // 이런 코드는 작성 하지 않는다.
}

void main()
{
	srand((unsigned)time(NULL));

	func42();
}