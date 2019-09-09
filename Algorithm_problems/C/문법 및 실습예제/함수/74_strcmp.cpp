#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u


void func74() {
	char ar[] = "apple";
	char br[] = "apples";

	printf("%d\n", strcmp(ar, br)); // 같으면 0을 리턴, 0이 아닌 숫자가 나오면 같지 않은 것

	if (strcmp(ar, br) == 0) {
		printf("인증\n");
	}
	else {
		printf("인증x\n");
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func74();

}