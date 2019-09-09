#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 함수의 타입을 void로 했을때 변수선언시 타입에 제약이 없다.
void *func32() {
	char *a;
	short *b = new short;
	int *c;

	//return a;
	return b;
	//return c;
	// void로 함수를 선언 했기 때문에 a,b,c 모두다 리턴 가능
}


void main()
{
	srand((unsigned)time(NULL));

	short *p32 = (short*)func32();
	delete p32;
}