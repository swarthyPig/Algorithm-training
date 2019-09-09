#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 포인트와 const 사용법
// func26(30, 40, new int, new int[3], &n26);
void func26(int a, const int b, const int *c, int *const d, const int *const e) {
	a = 10;
	//b = 20; // 값 변경 못함

	//*c = 30; // 값을 받을때 const 라서 오류, 값변경 x, 주소는 변경 가능

	c = new int;

	//d = new int; // 주소를 변경 불가, 값은 변경 가능
	*d = 40;

	// const int *const e : 주소도 변경 불가 값도 변경 불가
	// *e = 50; // 값 변경 불가
	// e = new int; // 주소 변경 불가
}

void main()
{
	srand((unsigned)time(NULL));

	int n26 = 99;
	func26(30, 40, new int, new int[3], &n26);
}