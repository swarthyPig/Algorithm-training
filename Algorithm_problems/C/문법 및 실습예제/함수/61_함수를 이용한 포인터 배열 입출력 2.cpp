#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func61(int *p, int s, int add) { // 값 넣기
	for (int i = 0; i < s; i++)
	{
		p[i] = p[i] + add;
	}
}

void main()
{
	srand((unsigned)time(NULL));

	int ar[] = { 0, 1, 2 };

	func61(ar, sizeof(ar) / sizeof(int), 10);

	for (int i = 0; i < 3; i++) { // 값 출력
		printf("%d\n", ar[i]);
	}
}#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func61(int *p, int s, int add) { // 값 넣기
	for (int i = 0; i < s; i++)
	{
		p[i] = p[i] + add;
	}
}

void main()
{
	srand((unsigned)time(NULL));

	int ar[] = { 0, 1, 2 };

	func61(ar, sizeof(ar) / sizeof(int), 10);

	for (int i = 0; i < 3; i++) { // 값 출력
		printf("%d\n", ar[i]);
	}
}