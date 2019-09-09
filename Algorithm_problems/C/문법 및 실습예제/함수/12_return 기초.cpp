#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// return값이 있는 함수는 반드시 return 이라고 하는 키워드가 있어야된다
// 전달하는 인수는 n개가 가능하지만 return 값은 반드시 한 개만 사용 할 수 있다.
// int 뿐만 아니라 모든 타입을 리턴 시킬 수 있다.
// int a func12(){} 잘못된 문법 a가 빠져야됨
int func12() {

    return 100;
}

void main()
{
	srand((unsigned)time(NULL));

	// 1.return 사용안함
	func12();
	// 2. 변수대입
	int n1 = func12();
	printf("%d\n", n1);
	// 3. 출력코드 바로 사용
	printf("d", func12());
}