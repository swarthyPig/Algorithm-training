#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

//함수포인터 제작
int *func67(char a, short *b, int c) {
	printf("코끼리67\n");
	return NULL;
}

void main()
{
	srand((unsigned)time(NULL));

	int *(*f001)(char, short *, int) = func67;
	//func67();
	f001(0, NULL, 0); // 포인터 인자 부분에는 NULL을 넣어줌
}