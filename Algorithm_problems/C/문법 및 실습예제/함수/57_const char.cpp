#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func57(const char *p) {
	char ar[] = "apple"; // ar은 상수가 됨. 대입 받을 수 없다.
	ar[0] = 'A';
	const char *br = "banana"; // 포인터 상수,값 갱신불가
	//br[0] = 'B'; // 갱신불가
}

void main()
{
	srand((unsigned)time(NULL));

	func57("apple");
}