#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

//continue, break
void func44() {
	int input;

	while (1) {
		scanf("%s", &input);

		if (input == 9999) {
			printf("코끼리\n");
			break;
			printf("앵무새\n");
		}
		if (input < 0) {
			printf("음수는 입력 할 수 없습니다.\n");
			continue; //다시 반복문으로 올라감
			printf("호랑이\n");
		}

		if (input % 2 == 0) {
			printf("입력한 숫자는 짝수 입니다.\n");
		}
		else {
			printf("입력한 숫자는 홀수 입니다.\n");
		}
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func44();
}