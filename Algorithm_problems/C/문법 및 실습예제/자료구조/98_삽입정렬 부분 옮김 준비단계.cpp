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

void func98() { //삽입정렬 부분 옮김 준비단계
	int ar[10] = { 2, 3, 8, 9, 7, 6, 10, 20, 30, 40 };

	for (int i = 0; i < 10; i++) {
		printf("%3d ", ar[i]);
	}printf("\n");

	int n = 5;
	int temp = ar[n]; // 6
	printf("  temp : %d\n", temp);

	int i;
	for (i = 0; i < n; i++) { // 0, 1, 2, 3, 4 -> 5번
		//printf("%d%d \n", 5-1-i,5-i);// 규칙
		if (ar[n - 1 - i] < temp) { // else를 사용 하지 않기 위해, if와 else는 동등해야댐
			break; // 왼쪽으로 계속 가다가 자기보다 작은수가 나오면 탈출
		}
		ar[n - i] = ar[n - 1 - i];
	}
	ar[n - i] = temp;
	for (int i = 0; i < 10; i++) {
		printf("%3d ", ar[i]);
	}printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func98();
}