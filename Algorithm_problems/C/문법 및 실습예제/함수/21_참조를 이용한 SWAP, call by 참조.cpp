#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 참조를 이용한 SWAP, call by 참조, 포인터랑 달리 방어적프로그램이 필요없다
void func21(int &a, int &b) {
	// 참조는 방어적인 프로그램을 짤 필요가없다, 
	int t;
	t = a;
	a = b;
	b = t;
}

// 비트교재 제일 뒷페이지에 필기되어있음.

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

}