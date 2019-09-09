#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u


void func70() {
	char ar[10] = "apple";
	printf("%d\n", sizeof(ar)); // 배열의 크기
	printf("%d\n", strlen(ar)); // 문자열의 길이

	int size = strlen(ar);
	printf("%d\n", size);

	// size_t strlen( char const* _Str);

	const char *br = "banana";
	int size_1 = strlen(br);
	printf("%d\n", size_1);

	printf("%d %d\n", sizeof(ar), sizeof(br)); // sizeof(br)==무조건 4가나옴, 포인터 주소를 저장하는 메모리 크기 구함
}

void main()
{
	srand((unsigned)time(NULL));

	func70();

}