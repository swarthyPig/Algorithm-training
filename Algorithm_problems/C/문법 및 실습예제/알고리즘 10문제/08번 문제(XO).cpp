#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void ex08() {
	printf("[8번 문제]\n");
	/*
	0 x 0 x 0
	x 0 x 0 x
	0 x 0 x 0
	x 0 x 0 x
	0 x 0 x 0
	*/
	int su1, su2;
	printf("값을 입력하시오.\n");
	scanf("%d", &su1);
	scanf("%d", &su2);

	for (int i = 0; i < su1; i++){
		for (int j = 0; j < su2; j++){
			printf("[%d %d]",i,j);
		}printf("\n");
	}printf("\n");

	for (int i = 0; i < su1; i++) {
		for (int j = 0; j < su2; j++) {
			if (i % 2 == 0) { // i가 짝수
				if (j % 2 == 0) { // j가 짝수
					printf("0 ");
				}
				else { // j가 홀수
					printf("x ");
				}
			}
			else { // i가 홀수
				if (j % 2 == 0) { // j가 짝수
					printf("x ");
				}
				else { // j가 홀수
					printf("0 ");
				}
			}

		}printf("\n");
	}
}

void main()
{
	srand((unsigned)time(NULL));

	ex08();
}