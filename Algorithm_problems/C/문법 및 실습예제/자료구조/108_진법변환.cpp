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

void func108() {
	/*	0	0	  0x0
	    1	1	  0x1
	    2	10    0x2
	    3	11    0x3
	    4	100   0x4
	    5	101   0x5
	    6	110   0x6
	    7	111	  0x7
	    8	1000  0x8
	    9	1001  0x9
	    10	1010  0xA
	    11	1011  0xB
	    12	1100  0xC
	    13	1101  0xD
	    14	1110  0xE
	    15	1111  0xF
	    16	10000 0x10
	    17	10001 0x11
	    18	10010 0x12
	    19	10011 0x13
	    20	10100 0x14
	    21  10101 0x15
	    22  10110 0x16
	*/
}

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

void main()
{
	srand((unsigned)time(NULL));

	//func108();
	//showBinary(20);//16진수, 10진수(확인불가, 제대로 안나옴) 상관없음
	//printf(" %d %x %p\n", 1234, 1234, 1234); // 16진수 : 0x4D2, %p : 8자리를 다 보고싶을 때, 주소를 출력할 때 사용함.
	//showBinary(1234);
	//showBinary(0x4D2);
	int a = 10;
	//printf("%d %d %x %p\n", a, &a, &a, &a); //(값, 주소, 소문자, 대문자)
	unsigned int b = 0x1234abcd; // 305,441,741
	//showBinary(b);

	UINT c = 0x000000ff; // unsigned int = UINT, 255

	UINT d = b & c;
	//showBinary(d); // 205

	//printf("%x %p\n", d, d); // 특정 비트를 걸러서 출력하고싶을때 and 사용

	UINT e = b & 0x0000ff00;
	//showBinary(e);

	//printf("%p\n", e);

	UINT f = b & 0xffff0000;
	//showBinary(f);

	UINT g = b & 0xff00;
	//showBinary(g);

	UINT h = b & 0xffffff00; // 특정비트 (걸러냄 = 리셋)시킴 같은 말
	//showBinary(h);

	// <<:2배증가, >>:2배감소
	UINT i = b << 8; // <<, >> 1byte씩 자리이동해라
	//showBinary(b);
	//showBinary(i);

	UCHAR c1 = (b & 0xff000000) >> 24; // 최상의 1byte걸러냄
	//showBinary(c1);
	//printf("%x\n", c1);

	BYTE c2 = (b & 0x00ff0000) >> 16;
	//showBinary(c2);
	//printf("%x\n", c2);

	BYTE c3 = (b & 0x0000ff00) >> 8;
	//showBinary(c3);
	//printf("%x\n", c3);
}