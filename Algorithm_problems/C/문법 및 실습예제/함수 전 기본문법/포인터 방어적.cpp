

#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u
void main()
{
	srand((unsigned)time(NULL));

	int *a; // 2줄로 할당 받는 방법
	a = new int; // 할당은 주소가 받음
	delete a; // 메모리 반환

	int *b = new int; // 한줄로 할당 받는 방법
	delete b; // 메모리 해제

	int *c = NULL; // 주소를 초기화 시킴
	c = new int[5]; // 할당
	delete[]c; // 해제

	int *d = NULL; // 주소를 초기화 시킴

	// 문제가 발생할 소지를 방어 하면서 프로그래밍 함
	if (d == NULL) { // 초기화가 되었으면 할당
		d = new int;
	}
	if (d != NULL) { // 값이 있으면 되지 않았으면 해제
		delete d;
	}

	int *e;
	int ct = 0;
	int input;
	int input2;
	scanf("%d %d", &input, &input2);
	while (1) {
		if (ct == input2) {
			break;
		}
		ct++;

		e = new int[10]; // 포인터 e에 메모리 할당

		for (int i = 0; i < input; i++) {

			e[i] = rand() % 100; // 할당된 만큼 배열에 난수 입력
		}
		for (int i = 0; i < input; i++) {
			printf("%d ", e[i]); // 난수 출력
		}printf("\n");

		delete[]e; // 1개이상 메모리 해제
	}

	int *f = new int;
	delete f; // delete f를 두번 쓰면 안된다.
}