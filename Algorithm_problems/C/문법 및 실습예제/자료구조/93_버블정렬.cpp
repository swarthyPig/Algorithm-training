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

void func93_1() { // 버블정렬 틀
	int num = 6;

	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < num - 1 - i; j++) {
			printf("[%d %d] ", j, j + 1);
		}printf("\n");
	}
}

void func93_2() {// 버블정렬, 실행할수록 속도 빨라짐
	int *ar;
	int num = 5;
	ar = new int[num];

	for (int i = 0; i < num; i++) { // 랜덤수 입력
		ar[i] = rand() % 100;
	}
	for (int i = 0; i < num; i++) { // 배열 출력
		printf("%d ", ar[i]);
	}printf("\n");
	printf("\n");
	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < num - 1 - i; j++) {
			if (ar[j] > ar[j + 1]) {
				int temp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = temp;
			}
			/*for (int i = 0; i < num; i++) {
				printf("%d ", ar[i]);
			}*/
		}printf("\n");
	}printf("\n");
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}
}

void main()
{
	srand((unsigned)time(NULL));

	//func93_1();
    func93_2();
}