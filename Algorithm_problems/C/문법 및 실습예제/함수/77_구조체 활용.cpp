#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

struct PERSON77 {
	char name[20];
	char phoneNum[20];
	int age;
};
void func77() {
	PERSON77 p1; // 위아래 결과는똑같다
	struct PERSON77 p2; // 옛날문법

	PERSON77 p3 = {
		"정영관",
		"20372229",
		24
	};
	printf("%s %s %d\n", p3.name, &p3.phoneNum[0], p3.age);

	PERSON77 p4;
	// p4.name = "홍길동"; // 일반변수는 주소 받을 수 없다.
	strcpy(p4.name, "홍길동");
	strcpy(p4.phoneNum, "홍길동");

	printf("%s %s %d\n", p4.name, &p4.phoneNum[0], p3.age);

}

void main()
{
	srand((unsigned)time(NULL));

	func77();

}