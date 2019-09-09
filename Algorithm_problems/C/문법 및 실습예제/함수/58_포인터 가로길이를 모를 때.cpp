#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func58() { // 가로길이를 모를때 
	int *p[3]; // 세로길이
	p[0] = new int[10];
	p[1] = new int[10];
	p[2] = new int[10];
	// 이 코드 실행 이후 결국 int p[3][10];과 같은문법
}

void main()
{
	srand((unsigned)time(NULL));

}