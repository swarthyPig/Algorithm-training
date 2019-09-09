#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// const 상수 사용
void func25() {
	int a = 10;

	// 변수를 상수화 시킨다.
	// 변수는 값을 변화 시킬 수 있지만, 상수는 초기화 이후 값을 절대 변경 시킬 수 없다
	// 즉, 상수는 대입을 못 받는다.
	// 선언과 동시에 초기화
	const int b = 20;

	// const int c; // 초기화를 해주지 않아서 오류

	a = 30;
	// b = 40; // 초기화이후 값 변경 안됨.

	a = b + 10;

	// 30 = 30; // 오류남, 상수 = 리터럴;

	const int month = 12;
	const float PI = 3.14f;
	printf("%d %d\n", a, b);
}

void main()
{
	srand((unsigned)time(NULL));

	func25();
}