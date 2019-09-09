#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func56() {
	int ar[] = { 0, 1, 2 };
	printf("%d\n", &ar[0]); // 배열 0번 주소보는법

	printf("%d\n", *(ar + 1)); // ar[1] 이랑 같음

	int *p1 = &ar[0];
	int *p2 = ar; // 위랑 아래랑 같은 문법

	(*p1)++; //내용증가 
	p2++; // 주소 증가, 배열번호 1번 

	printf("%d %d\n", *p1, *p2);

	p2++; // 배열번호 2번
	(*p2)++; // 배열번호 2번의 내용을 하나 증가시킴

	printf("%d %d\n", *p1, *p2);

	int br[3];
	br[2] = 10; // *(br+2)=10; 와 같은 코드
}

void main()
{
	srand((unsigned)time(NULL));

	func56();
}