#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 프로그램 폭주. Stack Overflow.
void func49_2();
void func49_1() { // 위에서 밑에꺼는 호출안되지만 위에 함수원형을 적어주었기 때문에 가능
	func49_2();
	printf("호랑이\n");
}
void func49_2() { // 밑에서 위에 함수는 호출 가능
	func49_1();
	printf("코끼리\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func49_2();

}