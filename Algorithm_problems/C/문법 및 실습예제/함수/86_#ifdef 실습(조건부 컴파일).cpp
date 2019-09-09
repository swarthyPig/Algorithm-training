#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// #ifdef 실습(조건부 컴파일)
void func86() {
#define TEST

#ifdef TEST
	printf("네트워크1\n");
#endif

	printf("네트워크2\n");

#ifdef TEST
	printf("네트워크3\n");
#endif 
}

void main()
{
	srand((unsigned)time(NULL));

	func86();

}