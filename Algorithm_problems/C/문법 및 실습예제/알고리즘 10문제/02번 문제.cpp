#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void ex02() {
	/*
	  * * * * *
	  * 0 0 0 *
	  * 0 0 0 *
	  * * * * *
	*/
	printf("[2번 문제]\n");

	int cnt = 1;
	for (int i = 0; i < 4; i++) { // 세로
	     for (int j = 0; j < 5; j++) { // 가로

                      if ((cnt >= 7 && cnt <= 9) || (cnt >= 12 && cnt <= 14)) { // 7~9번째 12~14번째 둘중 하나라도 참이면 참
		printf("O ");
	         }
	         else {
		printf("* ");
  	         }
	         cnt++;
	    }printf("\n");
        }
}

void main()
{
	srand((unsigned)time(NULL));

	ex02();
}