#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

struct STRU37 {
	int a, b;
};
// 일반변수 구조체 함수 인수 전달 방법
void func37(STRU37 x, STRU37 *y) { // 값은 일반변수로 받고 주소는 포인터변수로 받음

	printf("%d %d\n", x.a, x.b); // 값 출력
	printf("%d %d\n", &x.a, &x.b); // 주소 출력
	printf("%d %d\n", y->a, y->b); // 포인터 내용
	printf("%d %d\n", &y->a, &y->b); // 포인터 주소
}

void main()
{
	srand((unsigned)time(NULL));

	STRU37 st37; 
	st37.a = 10;
	st37.b = 20;

	func37(st37, &st37); // 값, 주소전달
}