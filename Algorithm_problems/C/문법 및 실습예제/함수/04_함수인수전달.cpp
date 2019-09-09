#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 인수전달 : 함수를 부를때 숫자를 던진다(대입연산)
// return 값 : 함수의 결과값을 받을 때
void func04(int num) {
	printf("%d\n", num);
}

void main()
{
	srand((unsigned)time(NULL));

	func04(3);
}