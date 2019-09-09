#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 인수 타입이 void로 받을때의 자유도, 포인트와의 관계, 캐스팅
void func28(void *a, void *b, void *c) { //모든 타입 받는 것이 가능, 대신 받는놈에 맞게 캐스팅해줘야됨
	printf("%c\n", (char)*(char*)a);
	printf("%d\n", (int)*(int*)b);
	printf("%d\n", (short)*(short*)c);
}


void main()
{
	srand((unsigned)time(NULL));

	char x = 'A';
	int y = 10;
	short z = 30;
	func28(&x, &y, &z);
}