#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

// #define은 include 문장 밑에 들어간다
// #define에 사용되는 문자는 대문자
// c언어에서 유일하게 세미콜론을 붙이지 않는다.
// #define 문장 뒤에는 주석을 달지않는다
// #define 을 사용하는 목적 : 코드의 유지보수를 위해

// 컴파일 시 APPLE이라는 글자만 보면 3으로 바꾼다
// 세미콜론을 붙이면 (값;) 으로 바뀜 
#define APPLE 5
//#define BANANA 3+5
#define BANANA (((3) * (5)) + (2))
#define ORANGE ((3)+(5))

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void main()
{
	srand((unsigned)time(NULL));

	int a = APPLE;
	printf("%d\n", a);

	for (int i = 0; i < APPLE; i++) {
		printf("호랑이\n");
	}

	printf("%d\n", APPLE);
	printf("%d\n", BANANA);
	printf("%d\n", BANANA * BANANA);
	printf("%d\n", ORANGE);

	printf("%d\n", STARTDOC);
}