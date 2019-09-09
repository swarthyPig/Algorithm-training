#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 할당 후 주소받고 리턴해줌
// 함수 이름앞에 *이 붙어있으면 주소를 리턴해준다는 뜻
// void* 는 리턴이 있다는 뜻
int *func30() { // 주소가 리턴되는 함수원형

	int *a = new int;

	*a = 99;
	return a;
}


void main()
{
	srand((unsigned)time(NULL));

	func30();// 호출만 하면 함수에 대한 메모리 누수 발생.
	int *n30 = func30();
	delete n30; // func30()으로 할당받은 메모리 해제

	printf("%d\n", func30());// 주소가 출력됨
	printf("%d\n", *func30());// 값(내용)이 출력됨
	delete func30(); //메모리 해제 됨.
}