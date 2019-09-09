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

void func90_1() { //swap
	int a = 3, b = 4;
	printf("%d %d\n", a, b);

	int t; // int temp;
	t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);
}

void func90_2() {
	int ar[10];
	for (int i = 0; i < 10; i++) {
		ar[i] = rand() % 100;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", ar[i]);
	}printf("\n");

	for (int i = 0; i < 10 - 1; i++) {
		if (ar[0] > ar[i + 1]) {
			//swap 교환
			int temp;
			temp = ar[0];
			ar[0] = ar[i + 1];
			ar[i + 1] = temp;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", ar[i]);
	}printf("\n");
}

/*53 18 62 0 52
  18 53 62 0 52
  18 53 62 0 52
  0 53 62 18 52
  0 53 62 18 52
  0 53 62 18 52*/
void func90_3() {
	//int ar[10];
	int *ar;
	int num = 5;
	ar = new int[num];
	for (int i = 0; i < num; i++) {
		ar[i] = rand() % 100;
	}
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");

	for (int i = 0; i < num - 1; i++) {
		if (ar[0] > ar[i + 1]) {
			//swap 교환
			int temp;
			temp = ar[0];
			ar[0] = ar[i + 1];
			ar[i + 1] = temp;

		}
		for (int j = 0; j < num; j++) {
			printf("%d ", ar[j]);
		}printf("\n");
	}
	for (int i = 0; i < num; i++) {
		printf("%d ", ar[i]);
	}printf("\n");

	delete[]ar;
}

void main()
{
	srand((unsigned)time(NULL));

	//func90_1();

	//func90_2();

	//func90_3();
}