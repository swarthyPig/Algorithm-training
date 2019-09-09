#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 재귀 함수 호출 
void func50() {// 잘 사용하면 아주 유용하다.
	func50();
}

void main()
{
	srand((unsigned)time(NULL));

	func50();

}