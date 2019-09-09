#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func63() {
	int **p; // 결과적으로 int p[3][4]의 문법으로 만들어보세요
	p = new int *[3];

	for (int i = 0; i < 3; i++) {
		p[i] = new int[4];
	}
	for (int i = 0; i < 3; i++) {
		delete[]p[i];
	}
	delete[]p;
}

void main()
{
	srand((unsigned)time(NULL));

}