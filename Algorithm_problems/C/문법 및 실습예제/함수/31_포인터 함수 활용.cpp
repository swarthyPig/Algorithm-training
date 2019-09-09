#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 포인터를 사용해서 주소를 공유 받아서 값을 출력
// 메인에서 메모리 할당, call, delete 까지 한번에 해줌
short *func31(short *a) {
	*a = 99;

	return a;
}


void main()
{
	srand((unsigned)time(NULL));

	short n31 = 10;
	short *p31;
	p31 = func31(&n31); // 일반변수의 주소를 공유, 해제 x
	printf("%d %d\n", n31, *p31);
	

	short *t31;
	t31 = new short;
	t31 = func31(t31); // 포인터변수 할당, 해제 ㅇ
	printf("%d\n", *t31);
	delete t31;

	delete func31(new short);//메모리 할당, call, 해제 까지 한번에 함
}