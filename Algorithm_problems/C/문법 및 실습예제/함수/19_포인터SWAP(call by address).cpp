#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 18번 과의 비교, 포인터를 사용하여 메모리를 공유하고나서는 값이 교환 된다 call by address
// 포인터를 이용한 SWAP
void func19(int *a, int *b) {
	if (a == NULL || b == NULL) { //방어적인 프로그램, 포인터는 적어줘야된다.
		return;
	}
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

void main()
{
	srand((unsigned)time(NULL));

	int n8 = 10, n9 = 20;
	printf("%d %d\n", n8, n9);

	func19(&n8, &n9);

	printf("%d %d\n", n8, n9);
}
