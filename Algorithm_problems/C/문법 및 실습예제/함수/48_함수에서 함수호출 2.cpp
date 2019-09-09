#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 함수에서 함수를 부를 수 있다.(밑에꺼에서 위에꺼를 부르는건 가능)
void func48_2();
void func48_1() {
	printf("호랑이\n");
	func48_2(); // 위에 함수에서는 밑에 함수 호출 안됨.(단, 함수 원형만 위에 적어주면 가능)
}

void func48_2() {
	printf("코끼리\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func48_1();

}