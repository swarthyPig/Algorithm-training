#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void rhombus() {
	printf("[7_1번 문제]\n");

	// 5*5 생성
	for (int i = 0; i < 5; i++) { // 세로
		for (int j = 0; j < 5; j++) { // 가로
			printf("* ");
		}printf("\n");
	}printf("\n");

	// 5*5 생성
	for (int i = -2; i <= 2; i++) { // 세로
		for (int j = -2; j <= 2; j++) { // 가로
			printf("* ");
		}printf("\n");
	}printf("\n");

	// 5*5 숫자값으로 생성
	for (int i = -2; i <= 2; i++) {
		for (int j = -2; j <= 2; j++) {
			printf("[%+2d %+2d] ", i, j);
		}printf("\n");
	}printf("\n");

	for (int i = -2; i <= 2; i++) {
		for (int j = -2; j <= 2; j++) {
			int a = i;
			int b = j;

			if (a < 0) { // a즉 i가 음수이면 양수로 바꿈
				a = -a;
			}
			if (b < 0) { // b즉 j가 음수이면 양수로 바꿈
				b = -b;
			}
			if (a + b <= 2) { // a+b가 2이하면 *을 출력
				printf("* ");
			}
			else {
				printf("  ");
			}
			printf("[%+2d %+2d] ", a, b);
		}printf("\n");
	}printf("\n");

	int input;
	scanf("%d", &input);
	int num = input / 2; //단 프로그램의 특성상 홀수를 입력한다.
	for (int i = -num; i <= num; i++) {
		for (int j = -num; j <= num; j++) {
			int a = i;
			int b = j;
			if (a < 0) {
				a = -a;
			}
			if (b < 0) {
				b = -b;
			}
			/*if (a + b <= num) {
			printf("* ");
			}
			else {
			printf("  ");
			}*/
			printf("%c ", a + b <= num ? '*' : ' ');
			//printf("[%+2d %+2d] ", a, b);
		}printf("\n");
	}
}

void main()
{
	srand((unsigned)time(NULL));

	rhombus();
}v