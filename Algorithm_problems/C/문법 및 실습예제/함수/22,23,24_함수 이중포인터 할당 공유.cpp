#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func22(int num, int **p) {
	*p = new int[num];
}

void func23(int num, int **p) {
	*p = new int[num];
	for (int i = 0; i < num; i++) {
		(*p)[i] = 0;
	}
}

void func24(int a, int *b, int **c) {
	// 아주 훌륭한 기능이 있다.
}

void main()
{
	srand((unsigned)time(NULL));

	int *a;
	int **b;
	b = &a; //공유
	a = new int; // 할당 a, *b 쓸 수 있음.
	*a = 99; // 값 = 99;
	printf("%d\n", **b); // 값
	**b = 77; // 값 = 77;
	printf("%d\n", *a); //값

	int *c;
	int **d;
	d = &c; // 공유
	*d = new int; // 할당 c, *d 쓸 수 있음.
	**d = 66;
	printf("%d\n", *c);
	*c = 55;
	printf("%d\n", **d);

	int *apple;
	func22(3, &apple); //apple은 주소받기전이라서 사용불가, 하지만 &apple는 처음부터 주소가 받아져있음.
	// int *p = apple;
	// int **p = &apple;
	apple[0] = 10;
	apple[1] = 20;
	apple[2] = 30;

	// 2차원 포인터를 함수에서 사용 할 때 용도
	// 함수에게 메모리를 요구할때
	// 가로 세로의 길이를 모를때
	for (int i = 0; i < 3; i++) {
		printf("%d\n", apple[i]);
	}

	delete[]apple;

	// 포인트 변수가 &을 사용하여 인수전달을 할 때는 100% 이중포인트로 받는다.
	int *n14, *n15, *n16;
	func23(10, &n14); // 10개 짜리 배열 생성후 0을 넣음

	func23(7, &n15); // 7개 짜리 배열 생성후 0을 넣음

	func23(15, &n16); // 15개 짜리 배열 생성후 0을 넣음

	int *n17;
	func24(3, new int, &n17); //표준함수 사용

	int n18 = printf("호랑이\n"); //printf도 함수이다 ""안의 내용이 전달임.
	int n19 = printf("%d\n", n18);
	printf("%d\n", n19);
}