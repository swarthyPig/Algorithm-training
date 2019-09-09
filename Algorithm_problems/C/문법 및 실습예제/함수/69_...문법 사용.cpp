#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u


// ...문법 사용
void func69_1(...) { // 던져주는 함수 인수의 개수가 제한이 없다
	printf("호랑이69_1\n");
}
void func69_2(int a, int b, ...) { // 첫번째 두번째 인수는 꼭 던져줘야됨. 그 이외에는 제한없음
	printf("호랑이69_2\n");
}

void main()
{
	srand((unsigned)time(NULL));

	func69_1();// 인수갯수 제한 없음
	func69_1(10);
	func69_1(10, 20, 30, 40);
	func69_1(10, 'A', "apple"); // 타입제한 없음

	func69_2(10, 20, 30, 40);

}