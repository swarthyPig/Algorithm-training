#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// return 값을 가지는 함수는 반드시 제어의 흐름상 리턴을 만나야 한다.
int func13() {
	if (3 < 2) {
		return 100;
	}
	else {
		return printf("호랑이\n");
	}
}

// return은 함수를 중단시킨다.
int func14() {
	printf("호랑이\n");
	return 100;
	printf("코끼리\n"); // 언리치드코드 unreach

}

// return 타입이 void 일때도 return 키워드를 사용 할 수 있다.
// 단, 값을 리턴 할 수는 없지만 함수를 중단 시키는 역할을 한다.
void func15() {
	int a = 3, b = 2;
	if (a > b) {
		printf("호랑이\n");
		return;
	}
	else {
		printf("코끼리\n");
	}
	printf("앵무새\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func13();
	func14();
	func15();
}