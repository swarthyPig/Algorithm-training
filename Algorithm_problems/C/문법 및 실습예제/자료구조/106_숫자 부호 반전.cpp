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

void func106() {

	int n1 = 0;
	for (int i = 0; i < 10; i++) {// 0과 1이 반전되어서 출력
		n1 = 1 - n1; // 0과 1이 반전되어서 출력
					 //n1 = 5 - n1; // 0과 5가 반전되어서 출력
		printf("%d ", n1);
	}printf("\n");

	int n2 = 1;
	for (int i = 0; i < 10; i++) { // 부호를 바꿔가면서 출력
	           //n2 = -n2;
		n2 = -1 * n2;
		printf("%d ", n2);
	}printf("\n");

	boolean n3 = false;
	for (int i = 0; i < 10; i++) { // 0과 1이 반전되어서 출력
		n3 = !n3;
		printf("%d ", n3);
	}printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));
	
	func106();
}