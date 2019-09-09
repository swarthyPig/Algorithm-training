#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func43() {
	// >, <, >=, <=, ==, != 비교연산, 관계연산 
	// && 논리 and 연산, || 논리 or 연산, ! 논리 부정
	// 산술연산-> 논리연산-> 관계연산 순서로 일어남
	if (3 + 2>6 && 7 * 3<6) { // +,* -> <,> -> && 순서
	}

	int input;
	scanf_s("%d", &input);
	int in1, in2;
	scanf_s("%d %d", &in1, &in2);
}

void main()
{
	srand((unsigned)time(NULL));

}