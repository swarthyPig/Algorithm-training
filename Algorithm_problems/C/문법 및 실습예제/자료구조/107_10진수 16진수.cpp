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

void func107() {
	printf("%d %d\n", 10, 0x10);// 10진수
	printf("%d %d\n", 10, 0xab);
	printf("%d\n", 0xABCDEF);
	printf("%d\n", 0x3F + 1);
	printf("%x\n", 0x3F + 1); // 16진수
	printf("%x\n", 0x99 + 1);
	printf("%x\n", 0x99 + 7);
	printf("%x\n", 0xFF + 1);
	printf("%d %d %x %x\n", 100, 0x100, 100, 0x100);
}

void main()
{
	srand((unsigned)time(NULL));
	
	func107();
}