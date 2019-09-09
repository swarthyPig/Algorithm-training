#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

typedef char ROBOT; // 이유1
typedef int INT; // 이유2
typedef unsigned int UI; // 이유3
// ROBAT 이라고 적으면 char로 바꿔줌
// #define 이랑 비슷함
// 이유 1: 코드의 가독성을 높이기 위해서 사용
// 이유 2: 오타방지
// 이유 3: 타이핑 적게 할려고
// 타입을 내가 새로 정의하겠다 라는 뜻
// 모든 타입은 대문자로 존재한다.
typedef int *LPTIGER;

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void main()
{
	srand((unsigned)time(NULL));

	ROBOT a = 'A'; // ROBOT 타입이 char로 정의되어있음
	printf("%c\n", a);

	ROBOT atom = 'B';

	INT b = 30;

	UI c = 40;

	CHAR d;
	UINT e;

	BYTE f; // 자주나옴 기억! typedef unsigned char
	WORD g; // 자주나옴 기억! unsigned short
	DWORD h; // 자주나옴 기억! unsigned long

	LPTIGER t1; // 포인트 변수 

	t1 = new int; // 할당
	*t1 = 30; 
	printf("%d %d\n", t1, *t1); // 주소, 내용

	delete t1; // 해제

	LPINT; // typedef int far
}