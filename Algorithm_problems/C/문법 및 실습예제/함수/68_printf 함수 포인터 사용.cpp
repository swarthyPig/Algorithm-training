#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u


// printf 함수포인터 사용
void func68() {
	int(*pf)(char const* const, ...) = printf;
	pf("호랑이_68\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func68();
	printf("호랑이\n");
	
}