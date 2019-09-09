#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void* func65(void *p) { //어떤 타입을 해도 상관없다
	return new short; //어떤 타입을 리턴해도 에러 안뜸
}

void main()
{
	srand((unsigned)time(NULL));

}