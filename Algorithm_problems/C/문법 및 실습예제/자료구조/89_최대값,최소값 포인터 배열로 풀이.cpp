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

void func89_1() {
	//int rn = rand() % 100;
	//printf("%d", rn);

	int ar[10];

	for (int i = 0; i < 10; i++) { // 생성
		ar[i] = rand() % 100;
	}

	for (int i = 0; i < 10; i++) { // 출력
		printf("%d ", ar[i]);
	}printf("\n");


	int max = 0;
	for (int i = 0; i < 10; i++) { // 배열돌면서 max에 최대값 넣기
		if (max < ar[i]) {
			max = ar[i];
		}
	}
	printf("%d\n", max);

	int min = ar[0];
	for (int i = 0; i < 10; i++) { // ar에 0번 숫자를 기준
		if (min > ar[i]) {
			min = ar[i];
		}
	}
	printf("%d\n", min);

	int n1 = 0;
	for (int i = 0; i < 10; i++) { // 최대값
		if (n1 < ar[i]) {
			n1 = ar[i];
		}
	}

	int n2 = INT_MAX;
	for (int i = 0; i < 10; i++) { // 최소값
		if (n2 > ar[i]) {
			n2 = ar[i];
		}
	}
}

void func89_2() {

	int max = 0;
	int min = INT_MAX;
	for (int i = 0; i < 10; i++) {
		int rn = rand() % 100;
		printf("%d ", rn);
		if (max < rn) {
			max = rn;
		}
		if (min > rn) {
			min = rn;
		}
	}printf("\n");
	printf("최대값 : %d 최소값 : %d\n", max, min);
}

void func89_3(int num) {
	int *ar = new int[num];

	for (int i = 0; i < num; i++) {
		ar[i] = rand() % 100;
	}

	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");

	int max = 0;
	int min = INT_MAX;
	for (int i = 0; i < num; i++) {
		if (max < ar[i]) {
			max = ar[i];
		}
		if (min > ar[i]) {
			min = ar[i];
		}
	}printf("최대값 : %d 최소값 : %d\n", max, min);

	delete[]ar;
}

void func89_4() {
	//printf("%d\n",INT_MAX);

	int ar[5][8];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 8; j++)
		{
			ar[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 8; j++)
		{
			printf("%3d ", ar[i][j]);
		}printf("\n");
	}

	int max = 0;
	int min = INT_MAX;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 8; j++) {
			if (max < ar[i][j]) {
				max = ar[i][j];
			}
			if (min > ar[i][j]) {
				min = ar[i][j];
			}
		}
	}printf("최대값 : %d 최소값 : %d\n", max, min);
}

void func89_5(int w, int h) { // 8,5 라고 전달하면 4번이랑 결과 같음

	int **ar;
	ar = new int *[h];

	for (int i = 0; i < h; i++) {
		ar[i] = new int[w];
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++)
		{
			ar[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++)
		{
			printf("%3d ", ar[i][j]);
		}printf("\n");
	}

	int max = 0;
	int min = INT_MAX;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (max < ar[i][j]) {
				max = ar[i][j];
			}
			if (min > ar[i][j]) {
				min = ar[i][j];
			}
		}
	}printf("최대값 : %d 최소값 : %d\n", max, min);

	for (int i = 0; i < h; i++) {
		delete[]ar[i];
	}
	delete[]ar;
}

void main()
{
	srand((unsigned)time(NULL));

	func89_1();
	func89_2();
	func89_3(20);
	func89_4();
	func89_5(8, 5);
}