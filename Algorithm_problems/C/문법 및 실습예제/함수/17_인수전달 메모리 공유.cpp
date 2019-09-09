#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 공유된 메모리와 안된 메모리는 주소 값이 다르다
void func17(int a, int *b) {
	printf("%d %d\n", &a, b);
}

void main()
{
	srand((unsigned)time(NULL));

	int n4 = 10, n5 = 20;
	printf("%d %d\n", &n4, &n5);

	func17(n4, &n5); //n4 과 a는 다른 메모리, n5와 *b는 같은 메모리(공유)
}