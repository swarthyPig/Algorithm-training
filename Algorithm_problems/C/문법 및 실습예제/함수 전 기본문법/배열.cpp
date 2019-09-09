#include "stdafx.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS


void main()
{
	int a = 10; // 정수형 변수 a의 초기값 10을 설정
	int b[5]; // 4바이트 메모리 5개
	//int c, d, e, f, g;
	//int h1, h2, h3, h4, h5;
	//int k0, k1, k2, k3, k4;
	b[0] = 10;
	b[1] = 20;
	b[3] = 30;
	//b[5] = 40; //조심하자
	printf("%d\n", b[0]); // 10
	printf("%d\n", b[1]); // 20
	printf("%d\n", b[2]); // 주소값 출력
	printf("%d\n", b[3]); // 30
	printf("%d\n", b[4]); // 주소값 출력

	//int ar[5];
	int br[5] = { 10, 20, 30, 40, 50 };
	printf("%d\n", br[0]); // 10
	printf("%d\n", br[1]); // 20
	printf("%d\n", br[2]); // 30 
	printf("%d\n", br[3]); // 40
	printf("%d\n", br[4]); // 50

	for (int a = 0; a < 5; a++) { // for문으로 배열 인덱스 0~5까지의 배열 출력
		printf("%d ", br[a]); 
	}printf("\n");

	int cr[5] = { 0, }; // 배열을 자동 0으로 초기화 // 0,에 ,를 넣는것은 표준임 
	for (int a = 0; a < 5; a++) {
		printf("%d ", cr[a]);
	}printf("\n");

	int dr[] = { 1, 2, 3, 4, 5 }; // 직접 값을 줘서 배열 초기화

	dr[0] = 10 * 3;// 30
	dr[1] = dr[0] * 2; // 60
	dr[2] = dr[0] * dr[1]; // 1800
	dr[2 * 3 - 2] = 100; // 배열 인덱스에 계산값이 올 수 있음 100
	dr[3] = dr[dr[4] - 99]; // dr[1] 값을 사용 60

	for (int a = 0; a < 5; a++) { // 배열의 값을 출력
		printf("%d ", dr[a]);
	}printf("\n");

	int er[] = { 54, 45, 96, 36, 15, 25, 48, 58, 28, 94 };

	for (int a = 0; a < 5; a++) { // 배열의 양 끝을 더한값을 출력
		printf("%d ", er[a] + er[9 - a]);
	}printf("\n");

	for (int a = 0; a < 10; a++) {
		printf("%d ", er[a] / 10 + er[a] % 10); // 각 배열의 몫과 나머지를 더한 값을 출력
	}printf("\n");

	for (int a = 0; a < 9; a++) { // 각배열의 첫번째 두번째의 함 두번째 세번째의 합...을 더해서 출력
		printf("%d ", er[a] + er[a + 1]);
	}printf("\n");

	int fr[5];
	printf("%d ", sizeof(fr)); //배열에서 확보된 메모리 크기를 알려줌
	printf("\n");
	printf("%d ", sizeof(int));
	printf("\n");
	printf("%d ", sizeof(fr) / sizeof(int)); // 배열의 갯수 
	printf("\n");

	short gr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printf("%d\n", sizeof(gr) / sizeof(short));
	for (int a = 0; a < sizeof(gr) / sizeof(short); a++) { // 배열의 갯수를 카운트안해도됨
		printf("%d ", gr[a]);
	}printf("\n");

	int hr[] = { 5, 9, 1, 3, 5 };
	int ir[] = { 9, 8, 5, 1, 3 };

	for (int a = 0; a < sizeof(hr) / sizeof(int); a++) {
		printf("%d ", hr[a] + ir[a]);
	}printf("\n");

	for (int a = 0; a < sizeof(hr) / sizeof(int); a++) {
		printf("%d ", hr[a] + ir[4 - a]);
	}printf("\n");
}