#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func40() {
	printf("%c\n", 'B');
	printf("%d\n", 10);
	printf("%5d\n", 123);
	printf("%05d\n", 123);
	printf("%s\n", "호랑이");
	printf("%+d\n", 123);
	printf("apple%04d.bmp\n", 120);
	printf("%f %f\n", 3.14, 3.14f); // f가 빠진것은 double 타입
}

void main()
{
	srand((unsigned)time(NULL));

	func40();
}