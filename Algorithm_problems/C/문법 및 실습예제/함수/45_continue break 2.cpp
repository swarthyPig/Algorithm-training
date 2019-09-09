#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func45() {
	for (int i = 0; i < 10; i++) {
		if (i % 3 == 0) {
			printf("호랑이\n");
			continue; // 만나는 순간 i++로 간다
		}
		printf("%d\n", i);
		if (i == 8) {
			printf("코끼리");
			break;
		}
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func45();
}