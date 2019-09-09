#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func60(int *p, int s) { // 배열 출력
	for (int i = 0; i < s; i++) {
		printf("%d\n", p[i]);
	}
}

void main()
{
	srand((unsigned)time(NULL));

	int ar[] = { 0, 1, 2 }; // 배열 선언 및 초기화
	printf("%d %d\n", sizeof(ar), sizeof(int)); // 배열의 메모리 크기와 타입의크기 출력
	func60(&ar[0], sizeof(ar) / sizeof(int)); // 배열 0번의 주소, 배열의 길이
}