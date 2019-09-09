#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 인수 : (10, &n3, new int, new int[3]) 포인터 사용, 공유, 대입연산 값전달로 할당
void func16(int a, int *b, int *c, int *d) {

	printf("%d\n", a); // 전달되어진 인수 a의 값
	printf("%d\n", *b); // 공유받은 포인터 b의 내용
	printf("%d\n", *c); // 할당받은 포인터 c의 값

	for (int i = 0; i<3; i++) {
		*(d + i) = i; // d[i] = i; 와 같음
	}
	for (int i = 0; i<3; i++) {
		printf("%d\n", d[i]); // 0,1,2
	}printf("\n");

	delete c;
	delete[]d;
}

void main()
{
	srand((unsigned)time(NULL));

	int n3 = 20;
	func16(10, &n3, new int, new int[3]); // 대입연산
	// int *b = &n3; // int *b;와 b = &n3; 가 합쳐진 것
	// int *c = new int; 
	// int *d = new int[3];
}