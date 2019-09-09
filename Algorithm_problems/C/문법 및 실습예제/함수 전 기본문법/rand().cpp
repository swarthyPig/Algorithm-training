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
	srand((unsigned)time(NULL)); // 시드값을 줌으로써 매번다른 난수 발생

	printf("%d\n", rand()); //random 출력, 유효값 : short타입의 양수 

	short num = rand(); 
	printf("%d\n", num);

	for (int a = 0; a < 10; a++){
		printf("%d ", rand()); 
		printf("%d ", rand() % 10); // 0~9까지 출력 %100이면 0~100까지 출력
	}printf("\n");

	for (int a = 0; a < 10; a++){
		short x = rand() % 100; // 0~100사이 출력
		printf("%d ", x);
	}printf("\n");


	int ar[] = { 1, 6, 5, 9, 1, 2 };
	
	for (int a = 0; a < 3; a++) {  // 처음과 끝 더하기
		printf("%d\n", ar[a] + ar[5-a]);
	}printf("\n");

	int br[10];

	for (int a = 0; a < 10; a++) { // 데이터 갱신과 출력은 항상 분리가 되야된다.
		br[a] = rand() % 100; // 0~100사이의 랜덤값을 배열에 입력
		printf("%d ", br[a]);
	}printf("\n");

	for (int a = 0; a < 10; a++) { // 랜덤값이 입력된 배열 출력
		printf("%d ", br[a]);
	}printf("\n");

	for (int a = 0; a < 5; a++) { // 랜덤값이 입력된 배열의 처음과 끝 더하기
		printf("%d ", br[a] + br[9 - a]);
	}printf("\n");

}