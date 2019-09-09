#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// void : 없다
// () 사이에는 void가 생략되어있다.
// 함수는 호출(call)하여야 실행된다.
// 함수 작성 이후 호출을 하지 않아도 되고 한번 이상 호출 할 수도 있다.
// 함수를 호출 할때 ()를 빼먹지 말자.
void apple() {
	printf("호랑이\n");
}

void main()
{
	srand((unsigned)time(NULL));

	apple(); // apple 호출

	//함수 목적 : 코드의 재활용
	for (int i = 0; i < 10; i++) {
		printf("%d\n", rand() % 100);
	}
	apple();

	for (int i = 0; i < 5; i++) {
		apple();
	}
}