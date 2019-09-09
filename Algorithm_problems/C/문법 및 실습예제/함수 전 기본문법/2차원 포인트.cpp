

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

	int *ptr[3]; //세로 3개
	ptr[0] = new int[4];
	ptr[1] = new int[4];
	ptr[2] = new int[4];

	int ar[3][4] = { 0, }; // 배열을 0으로 채움
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%2d ", &ar[i][j]); // 배열이라서 메모리 주소가 연속적이다
			printf("%2d ", &ptr[i][j]); // 포인트라서 메모리 주소가 연속적이지않다
		}printf("\n");
	}printf("\n");

	int *pp = &ar[0][0]; // 포인터 배열 pp에 배열 ar의 [0][0]의 주소값을 공유, 한줄로 선언하고 공유
	for (int i = 0; i < 12; i++) {
		printf("%d ", pp[i]);
	}

	// int *tt = &ptr[0][0]; // 이렇게 사용 불가능 메모리가 연속적이지 않은 포인터배열을 사용했기 때문
	// **면 주소를 2번 받아야 사용 가능하다     
	// 주소를 두번받으면 2차원배열처럼 사용 할 수 있어서 쉽다.
	// 1. 주소->int ptr[];(세로길이)
	// 2. 주소->(가로길이);(1번이 확정되었을 때)
}

----------------------------------------------------------------------------------------------------------------------------------


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

	//        가로 세로
	// [] []    0    0
	// *  []    x    0
	// *  *     x    x
	//          0    x
	// 2차원 포인터를 사용 할때(int **ptr;) 1. 함수, 2.가로길이와 세로길이를 모를 때

	int **apple; //3번째 문법(가로길이 세로길이 둘다 모를 때)
	apple = new int *[3]; // 이 코드 이후 세로길이 확정
	 //이 코드 이후 int *apple[3]; 와 동일한 코드

	for (int i = 0; i < 3; i++) {
		apple[i] = new int[4];
	}
	// 이 코드 이후 apple[3][4]라고 선언한 것이랑 똑같음

	for (int i = 0; i < 3; i++) { // 입력
		for (int j = 0; j < 4; j++) {
			apple[i][j] = i * 4 + j;
		}
	}

	for (int i = 0; i < 3; i++) { // 출력
		for (int j = 0; j < 4; j++) {
			printf("%2d ", apple[i][j]);
		}printf("\n");
	}

	for (int i = 0; i < 3; i++) { // 메모리 반환
		delete[]apple[i];
	}

	delete[]apple; // 메모리 반환
}
	

---------------------------------------------------------------------------------------------------------------------------------

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

	int(*ptr)[4];  //4번째 문법 가로길이 고정 세로 모름
	ptr = new int[3][4]; // 여기서 3이 세로길이를 설정한다
	// 이 코드 이후 int ptr[3][4]; 와 완전히 동일한 문법이다.

	// 0부터 11까지 데이터를 넣자
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
		{
			ptr[i][j] = i * 4 + j;
		}
	}
	// 데이터를 출력하자 
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {

			printf("%2d ", ptr[i][j]);
		}printf("\n");
	}

	delete[]ptr; // 메모리 반환
}
