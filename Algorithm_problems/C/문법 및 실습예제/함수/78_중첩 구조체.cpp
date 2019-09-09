#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

struct TIGER01 {
	int a;
};

struct TIGER02 {
	int a;
	int b;
	TIGER01 t; // ÁßÃ¸ ±¸Á¶Ã¼
};

// ÁßÃ¸ ±¸Á¶Ã¼
void func78() {
	TIGER02 tiger;
	tiger.a = 10;
	tiger.b = 20;

	tiger.t.a = 30;

	printf("%d %d %d\n", tiger.a, tiger.b, tiger.t.a);
}

void main()
{
	srand((unsigned)time(NULL));

	func78();

}