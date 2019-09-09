#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// scanf로 문자열 받기
void func54() {
	char input[128] = { 0, }; // 배열의 크기를 2의 승수로 넣어줌 
	scanf("%s", &input);
	printf("%s\n", input);
}

void main()
{
	srand((unsigned)time(NULL));

	func54();
}