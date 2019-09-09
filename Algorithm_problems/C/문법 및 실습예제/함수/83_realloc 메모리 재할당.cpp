#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

void func83() {
	int *p1 = (int*)malloc(sizeof(int) * 5);
	// 5를10으로 바꾸고 싶을때
	// 정석 : 해제 시키고 다시 메모리 받는다
	free(p1);
	p1 = (int*)malloc(sizeof(int) * 10);


	// 메모리를 재할당 해주는 함수 
	realloc(p1, sizeof(int) * 3);
	free(p1);

	//new 방법, new는 realloc에 대체되는게 없음
	int *p2 = new int[5];
	delete[]p2;
	p2 = new int[10];
	delete[]p2;
	p2 = new int[3];
	delete[]p2;
}

void main()
{
	srand((unsigned)time(NULL));


}