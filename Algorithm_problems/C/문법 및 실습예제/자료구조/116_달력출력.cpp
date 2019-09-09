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

void func116() { // 달력출력
	int month[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int initDay = 2; // 2019, 일(0) ~ 토(6) 1월1일의 시작 요일

	for (int i = 0; i < 12; i++) { // 1년은 12달
		printf("\n");
		printf("- %d 월달 달력 -\n", i + 1); // 월 수 출력
		// 일(0) ~ 토(6)
		printf("일 월 화 수 목 금 토\n");

		for (int j = 0; j < initDay; j++) { // 첫줄 곰백삽입(시작 요일)
			printf("   ");
		}

		for (int k = 0; k < month[i]; k++) { // 첫째날부터 마지막날까지
			printf("%2d ", k + 1);
			if ((initDay + k) % 7 == 6) { // (공백 + 일수)줄바꿈 
				printf("\n");
			}
		}

		initDay = (initDay + month[i]) % 7; // 그 다음 날의 시작 요일을 계산
		printf("\n");
	}
}

void main() {
	srand((unsigned)time(NULL));

	func116();
}