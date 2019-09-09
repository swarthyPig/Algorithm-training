#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func67_0() {
	printf("코끼리67_1\n");
}

void func67_1() {
	printf("앵무새67_2\n");
}

void func67_2() {
	printf("호랑이67_3\n");
}

void main()
{
	srand((unsigned)time(NULL));

	// 함수 포인터 활용
	for (int i = 0; i < 10; i++) {
		int rn = rand() % 3;

		switch (rn) {

		case 0:
			func67_0();
			break;

		case 1:
			func67_1();
			break;

		case 2:
			func67_2();
			break;
		}
	}

	printf("\n");
	// 위에 코드랑 밑에 코드랑 같은 코드임
	for (int i = 0; i < 10; i++) {
		int rn = rand() % 3;
		void(*ff[3])() = { func67_0,func67_1,func67_2 };// 함수 주소를 3개받는 배열이다, 함수 포인트 배열
		ff[rn]();
	}
}