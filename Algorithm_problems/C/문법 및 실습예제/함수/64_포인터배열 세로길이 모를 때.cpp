#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func64(int **p) {
	// p가 메모리 받는다.

	//int (*p)[3]; // 세로길이를 모를 때 사용
}

void main()
{
	srand((unsigned)time(NULL));

	int *pp;
	func64(&pp);
}