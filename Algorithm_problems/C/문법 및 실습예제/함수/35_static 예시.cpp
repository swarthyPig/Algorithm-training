#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void func35_1() {
	int a = 10;
	a++;
	printf("%d\n", a);
}

void func35_2() {
	static int a = 10; //컴파일 할 때 함수 위로 올린다. 즉, 전역변수로 처리한다. 
		        // 다른 함수에서는 사용하지 못하게 하면서 전역변수의 성격을 갖기위해 사용한다.
	a++;
	printf("%d\n", a);
}


void main()
{
	srand((unsigned)time(NULL));

	func35_1();
	func35_1();
	func35_1();
	func35_2();
	func35_2();
	func35_2();
}