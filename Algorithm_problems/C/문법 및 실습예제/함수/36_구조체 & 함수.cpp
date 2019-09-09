#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

struct STRU36 {
	int a, b;
};
// 구조체 & 함수
void func36() {

	STRU36 st;
	st.a = 10;
	st.b = 20;
	printf("%d %d\n", st.a, st.b);
}

void main()
{
	srand((unsigned)time(NULL));

	func36();
}