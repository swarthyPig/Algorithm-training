#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

int b34 = 10; // 전역변수, 가급적 사용을 피하자
void func34_1() {
	int n34 = 10; // 지역변수
	{
		int a34 = 30;
	}// a34는 메모리가 사라진다
	 // printf("%d", a34);// a34는 사용불가
	n34 = 50; // n34는 사용가능
	b34 = 20;
}// n34는 메모리가 사라진다 그래서 func34_2에서는 n34를 사용할 수 없다.

void func34_2() {
	// n34 = 20; //사용불가
	b34 = 30;
	{
		int *a = new int; // 스코프 밖으로 나가도 메모리 해제안됨, new는 delete로 해제해줘야됨.
						  // a = new int;
		delete a;
	}
	// *a = 100; //문법도 성립 안됨
}


void main()
{
	srand((unsigned)time(NULL));

}