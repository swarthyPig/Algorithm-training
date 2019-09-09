#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

//#define APPLE 0
//#define BANANA 1
//#define ORANGE 2
//#define KIWI 3
//#define LEMON 4
//같은 문법
enum FRUIT { // FRUIT 생략가능
	apple,
	banana,
	orange = 40,
	kiwi,
	lemon
};
// enum
void func80() {
	printf("%d %d %d %d\n", apple, orange, kiwi, lemon); // 0, 40, 41, 42
}

void main()
{
	srand((unsigned)time(NULL));

	func80();

}