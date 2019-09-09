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

	int *ptr[3]; // == int *ptr0, *ptr1, *ptr2 , 포인터 배열
		 // 0번이든 1번이든 2번이든 모두다 공유받을 수 있고 메모리 한개, 한개이상
		 // 받을 수 있다.
	int n = 10;
  	/*ptr[0] = new int[5];
	  ptr[1] = new int[5];
	  ptr[2] = new int[5];
  	*/
	for (int i = 0; i < 3; i++) {     // ptr[0] = new int[n];
		ptr[i] = new int[n]; // ptr[1] = new int[n];
	}		           // ptr[2] = new int[n];

	//[0 0] [0 1] [0 2] [0 3] [0 4]
	//[1 0] [1 1] [1 2] [1 3] [1 4]
	//[2 0] [2 1] [2 2] [2 3] [2 4]
	// 이 코드 이후부터는 int ptr[3][5]; 라고 문법을 선언한것과 똑같다
	// int ptr[세로][가로];

	*(ptr[0] + 0) = 10; // ptr[0][0]
	*(ptr[0] + 1) = 20; // ptr[0][1]
	*(ptr[0] + 2) = 30; // ptr[0][2]
	*(ptr[0] + 3) = 40; // ptr[0][3]
	*(ptr[0] + 4) = 50; // ptr[0][4]

	for (int i = 0; i < 3; i++) { // 세로
		for (int j = 0; j < n; j++) // 가로
		{
			ptr[i][j] = i * n + j; //  0  1  2  3  4  5  6  7  8  9
				          // 10 11 12 13 14 15 16 17 18 19
			 	           / 20 21 22 23 24 25 26 27 28 29             
		}
	}

	for (int i = 0; i < 3; i++) { // 세로
		for (int j = 0; j < n; j++) // 가로
		{
			//printf("%2d ", ptr[i][j]);
			//printf("%2d ", *(ptr[i]+j));
			printf("%2d ", *(*(ptr + i) + j)); // 2차원 포인터에서는 **사용
		}printf("\n");
	}
	/*delete[]ptr[0];
	  delete[]ptr[1];
	  delete[]ptr[2];*/
	for (int i = 0; i < 3; i++) { // for문을 사용하여 한번에 메모리 반환
		delete[]ptr[i];
	}
}