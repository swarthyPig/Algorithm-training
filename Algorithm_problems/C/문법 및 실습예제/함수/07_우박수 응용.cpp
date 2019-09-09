#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// *에 대한 우박수 출력
void func07(int num) {
	printf("우박수 출력 프로그램\n");
	while (1) {

		printf("%d\n", num);
		if (num == 1) {
			printf("우박수를 모두 출력 하였습니다.\n");
			break;
		}
		if (num % 2 == 0) {
			num /= 2;
		}
		else {
			num = 3 * num + 1;
		}
	}
	printf("\n");
}


void main()
{
	srand((unsigned)time(NULL));

	func07(39);
}