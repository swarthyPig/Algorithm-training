#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func55() {
	int num = 7;
	int *pnum;

	pnum = &num; // 공유
	printf("%d\n", pnum); // 주소출력

	short *n1;
	//n1 = &num; // short * = int 주소, 양쪽의 타입이 맞지않다.

	int n2 = 10, n3 = 20;
	int *n4;

	n4 = &n2; // n2를 주소를 공유받음(10)
	*n4 = (*n4) + n3; // 10 + 20

	printf("%d\n", n2); // 30 , *n4도 같은 값

	*n4 = 100;
	//*n4++; // *(n4++); 우선 순위 때문에 틀린문장
	(*n4)++;// 맞는문법, 내용증가
	printf("%d\n", n2); // 101 , *n4도 같은 값

	int *n5 = 0;
	int *n6 = NULL; // 둘다 주소가 없다는표시, NULL을 넣는 것이 정석

	// int *n7;
	// *n7 = 200; // 주소받기전에 사용 x
}

void main()
{
	srand((unsigned)time(NULL));

	func55();
}