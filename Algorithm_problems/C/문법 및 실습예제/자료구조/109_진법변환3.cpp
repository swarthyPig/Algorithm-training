#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func110(unsigned short num) {

	// 0001 0010 0011 0100
	// 00010 010001 10100
	// 2 17 20

	unsigned short a = (num & 0xf800) >> 11; // 2 / 63,488 / 1111 1000 0000 0000
	unsigned short b = (num & 0x07e0) >> 5; // 17 / 2,016 /  0000 0111 1110 0000
	unsigned short c = num & 0x1f; // 20 / 31 / 0000 0000 0001 1111 

	printf("%d %d %d\n", a, b, c);
}

void main()
{
	srand((unsigned)time(NULL));

	unsigned short n4 = 0x1234; // 4,660, 0001 0010 0011 0100
	func110(n4);
}