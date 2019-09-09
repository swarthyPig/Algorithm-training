#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

struct STRU39 {
	int a;
};
void func39(STRU39 *st) {
	for (int i = 0; i < 10; i++) {
		st[i].a = i * 10; // 내용에 값을 넣어줌
	}
}

void main()
{
	srand((unsigned)time(NULL));

	// func39(new STRU39[10]); // 한줄 할당
	STRU39 *st39; // 풀어서 할당
	st39 = new STRU39[10];

	func39(st39); // 함수에서 값을 넣어줌

	for (int i = 0; i < 10; i++) { // 출력
		printf("%d\n", st39[i].a);
	}
	delete[]st39; // 1개이상 해제
}