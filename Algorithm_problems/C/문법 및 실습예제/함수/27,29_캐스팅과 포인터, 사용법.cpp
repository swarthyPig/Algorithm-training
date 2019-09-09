#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 대입연산자 주의점, 강제 캐스팅 연산자 예시
void func27() {
	int *a;
	//short *b;
	//int *c;
	int *c = new int;
	a = c; // 실행상 문제가 발생, c는 주소 받기 전임.
	short *b = new short;
	// a = b; //양쪽의 타입이 다름. 에러 발생.
	// 대입은 항상 양쪽의 타입이 같아야 된다.

	void *d; // 받는 타입에 제약이 없다. 모든 타입 가능.
			 //void e; // 오류 발생, void는 포인터변수만 선언 가능, 일반 변수는 안됨.

	// 포인터 d는 void 형이므로 모든타입을 다 받을 수 있다.
	d = a;
	d = b;
	d = c;

	// a = d; // 받을 때는 문제없지만, 줄 때는 받는 놈의 타입에 맞춰줘야됨
	a = (int*)d;// d를 int타입의 주소 타입변환
	b = (short*)d;
}

// 캐스팅과 포인터 사용법
void func29() {
	int *a = new int;
	*a = 10;
	printf("%d\n", *a);
	printf("%d\n", *(int*)a); // 편의상 생략
	printf("%d\n", (int)*(int*)a); // 완벽한 문장
	printf("%d\n", (int)*(short*)a); // 문법적으로 허용만시켜줌 
}


void main()
{
	srand((unsigned)time(NULL));

	func27();
}