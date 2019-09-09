#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 포인터와 참조변수의 방어적프로그래밍 차이
void func20(int *a, int &b) { //a는 포인터변수 b는 참조변수
	if (a != NULL) { // 참조는 방어적인 프로그램을 짤 필요가없다, 
		*a = 10; // 포인터라서 NULL들어오면 터지므로 방어적 프로그램이 필요하다
	}
	b = 20;
}

void main()
{
	srand((unsigned)time(NULL));

	int n10 = 10;
	int &n11 = n10; // 참조(공유) : 일반 변수 앞에 &을 붙이는 것 
	printf("%d %d\n", &n10, &n11); // 값도 같고 주소도 같다.
	// int &n12; 
	// 1. 참조변수는 선언과 동시에 공유를 받지 않으면 컴파일에러
	// 2. 참조는 단 한번만 참조를 받을 수 있다. 

	int n12 = 3, n13 = 4;
	func20(NULL, n13); // (포인터, 참조) 포인터는 NULL을 넣으면 터짐
}