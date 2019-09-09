#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void main()
{
	srand((unsigned)time(NULL));

	BITMAPFILEHEADER a;
	LPBITMAPFILEHEADER b;

	b = new BITMAPFILEHEADER; // 할당
	b->bfType = 20; //WORD(unsigned short)
	a.bfType = 10;

	printf("%d %d %d\n", &b->bfType, b->bfType, a.bfType); // (b의주소, b의 내용, a의 값)

	delete b;
}