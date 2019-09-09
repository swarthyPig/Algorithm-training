#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void showBinary(unsigned int num) { // num이 9가 던져졌다고 가정
									//num = 9; // int 32bit 0000 0000 0000 0000 0000 0000 0000 1001
	printf("%x\n", num);
	int ar[32] = { 0, };

	for (int i = 0; i < 32; i++) {
		ar[32 - 1 - i] = num % 2; // 배열 끝에서 부터 채움
		num = num / 2;
		if (num == 0)
			break;
	}

	for (int i = 0; i < 32; i++) {
		if (i % 4 == 0) {
			printf(" ");
		}printf("%d", ar[i]);
	}printf("\n");
}

void func109(unsigned char num) {
	num = 0xb3; //179, 1011 0011

	showBinary(num);

	const char *ar[8] = {
		"가스렌지","냉장고","선풍기","전등","라디오","TV","전자렌지","컴퓨터"
	};

	UCHAR t = 0x01; // 1
	for (int i = 0; i < 8; i++, t = t << 1) { // 1011 0011
		printf("%s는 %s입니다.\n", ar[i], (num & t) ? "ON" : "OFF");
	}printf("\n");


	/*for (int i = 0; i < 8; i++){
	printf("%8s : %x\n", ar[i], ((num >> (8 - i - 1)) & 0x1));
	}*/
}

void main()
{
	srand((unsigned)time(NULL));

	int n1 = 15;
	//printf("%d\n", n1*800);
	//printf("%d\n", (n1<<9)+(n1<<8)+(n1<<5)); // 실행속도 이득 15*(512+256+32)

	//UINT n2 = ((b << 8) >> 16) << 8; //양쪽 떼버리고 중앙만 살림

	UCHAR n3 = 0xb3; //(10110011) 가, 냉, 선, 전, 라, tv, 렌, 컴

	func109(n3);
}