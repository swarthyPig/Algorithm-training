

	
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

	// 3중 포인터 복습 하지말것

	int ar[2][3][4]; // 가로4개 세로3개의 네모가 2개(깊이)인 일반 배열

	for (int i = 0, ct = 0; i < 2; i++) { // 입력
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++, ct++) {
				ar[i][j][k] = ct;
			}
		}
	}
	for (int i = 0, ct = 0; i < 2; i++) { // 출력
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++, ct++) {
				printf("%2d ", ar[i][j][k]);
			}printf("\n");
		}printf("\n");
	}

	// 3중 포인터 배열
	int ***ptr; // 2개(깊이)->3개->4개 순서
	ptr = new int **[2]; // 깊이 할당

	for (int i = 0; i < 2; i++) { // 세로 할당
		ptr[i] = new int *[3];
	}

	for (int i = 0; i < 2; i++) { // 가로 할당
		for (int j = 0; j < 3; j++) {
			ptr[i][j] = new int[4];
		}
	}

	for (int i = 0, ct = 0; i < 2; i++) { // 입력
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++, ct++) {
				ptr[i][j][k] = ct;
			}
		}
	}
	for (int i = 0, ct = 0; i < 2; i++) { // 출력
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++, ct++) {
				printf("%2d ", ptr[i][j][k]);
			}printf("\n");
		}printf("\n");
	}

	// 메모리 반환 시에는 거꾸로 함
	for (int i = 0; i < 2; i++) { // 가로, 세로 반환
		for (int j = 0; j < 3; j++) {
			delete[]ptr[i][j];
		}
	}

	for (int i = 0; i < 2; i++) { // 깊이 반환
		delete[]ptr[i];
	}

	delete[]ptr; // 포인터 반환
}


