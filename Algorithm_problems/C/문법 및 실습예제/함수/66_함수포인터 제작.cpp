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
void func66() {
	printf("호랑이66\n");
}

void main()
{
	srand((unsigned)time(NULL));

	// 함수 포인터 제작
	void(*f000)() = func66;
	//func66();
	f000();
}