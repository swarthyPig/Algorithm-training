#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define __DEBUG__

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 디버깅 : f10
// 디버깅 종료 : shift + f5
// 일단 진입하고 그 이후 디버깅 : ctrl + f10
// break point : f5
// 더 깊게 진입 : f11

void func01() {
	printf("앵무새1\n");
	printf("앵무새2\n");
	printf("앵무새3\n");
	printf("앵무새4\n");
}

void main() {
	srand((unsigned)time(NULL));

	/*int ar[10] = { 0, }; // 배열을 0으로 채움
	int *pp = new int[10];// 포인터 변수는 조사식에서 일일이 지정해줘야 볼수있음

	func01();
	printf("호랑이\n");
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		printf("%d ", i);
		sum = +i;
		printf("%d\n", sum);
	}

	func01();
	printf("코끼리\n");

	BITMAPFILEHEADER bf = { 0, };
	bf.bfType = 999;
	printf("사자");
	delete[]pp;*/

	//-------------------------------------------------------------------------------------------

	/*int a = 10;
	int b = 20;
	printf("%d\n", a);
	int *ar = NULL;
	//ar[0] = 100; // NULL 인 배열에 값을 넣으므로 오류
	printf("%d\n", b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	if (3 < 2); { // if문뒤에 ;이 있으므로 중괄호와는 별개로 동작
		printf("호랑이\n");
	}
	printf("코끼리\n");*/

	//-------------------------------------------------------------------------------------------

	// 조건부 컴파일
	// 전처리기 부분에 #define __DEBUG__ <--가 선언되 있어야 작동함
	BITMAPFILEHEADER bf = { 0, };
#ifdef __DEBUG__
	printf("%d\n", bf.bfOffBits);
	printf("%d\n", bf.bfReserved1);
	printf("%d\n", bf.bfReserved2);
	printf("%d\n", bf.bfSize);
	printf("%d\n", bf.bfType);
#endif // __DEBUG__

	printf("호랑이\n");
}