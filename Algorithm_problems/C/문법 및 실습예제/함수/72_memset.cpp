#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u


void func72() {
	char ar[] = "apple";
	int size = strlen(ar);
	for (int i = 0; i < size; i++) {
		printf("%c %d\n", ar[i], ar[i]);
	}printf("\n");

	//메모리 내용을 깨끗하게 지워주는 함수
	memset(ar, 0, size);

	for (int i = 0; i < size; i++) {
		printf("%c %d\n", ar[i], ar[i]); // 깨끗하게 지우고 0 채워진 배열 출력
	}printf("\n");

	char *p = new char[1000000];
	memset(p, 0, 1000000);
	// 사용
	delete[]p;
}

void main()
{
	srand((unsigned)time(NULL));

	func72();

}