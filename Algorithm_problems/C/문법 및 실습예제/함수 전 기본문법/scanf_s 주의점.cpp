#include "stdafx.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS


void main()
{
	/*
	int input;

	printf("코끼리");
	scanf("%d", &input);

	여기서 프로그램은 멈춘다.
	1. scanf 입력 변수 타입은 int만 가능.
	2. 형식지정자는 %d말고 다른 것은 안된다.
	3. 반드시 &를 붙여야된다.
	input 이라고 사용 할 때는 메모리안의 값을 이야기한다.
	&input 이라고 사용 할 때는 메모리의 고유 시리얼 번호(주소, address)를 이야기한다.


	printf("호랑이%d\n", input);
	*/

	int in1, in2;

	scanf("%d%d", &in1, &in2);
	printf("입력한 숫자 %d와 %d의 합은 %d 입니다\n", in1, in2, in1 + in2);
}