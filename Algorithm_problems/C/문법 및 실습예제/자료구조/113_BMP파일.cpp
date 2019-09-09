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

void func113() {
	FILE *rf = fopen("sample.bmp", "rb");

	char a;
	fread(&a, 1, 1, rf);
	printf("%x %c\n", a, a);
	char b;
	fread(&b, 1, 1, rf);
	printf("%0x\n", b);

	if ((a != 'B') || (b != 'M')) { // bmp파일은 첫글자와 두번째 글자가 B와 M이다
		printf("bmp파일 포맷이 아닙니다\n");
	}
	else {
		printf("bmp파일 확인됨.\n");
	}

	int c;
	fread(&c, sizeof(int), 1, rf);
	printf("%d %x %p\n", c, c, c);

	short r1, r2;
	fread(&r1, sizeof(short), 1, rf);
	fread(&r2, sizeof(short), 1, rf);
	printf("%x %x\n", r1, r2);

	int d;
	fread(&d, sizeof(int), 1, rf);
	printf("%x\n", d);

	printf("\n");
	long n1; fread(&n1, sizeof(long), 1, rf); printf("%x\n", n1);
	long n2; fread(&n2, sizeof(long), 1, rf); printf("%x\n", n2); // 가로
	long n3; fread(&n3, sizeof(long), 1, rf); printf("%x\n", n3); // 세로
	short n4; fread(&n4, sizeof(short), 1, rf); printf("%x\n", n4);
	short n5; fread(&n5, sizeof(short), 1, rf); printf("%x\n", n5);
	long n6; fread(&n6, sizeof(long), 1, rf); printf("%x\n", n6);
	long n7; fread(&n7, sizeof(long), 1, rf); printf("%x\n", n7); // 24비트 칼라임을 나타냄
	long n8; fread(&n8, sizeof(long), 1, rf); printf("%x\n", n8);
	long n9; fread(&n9, sizeof(long), 1, rf); printf("%x\n", n9);
	long n10; fread(&n10, sizeof(long), 1, rf); printf("%x\n", n10);
	long n11; fread(&n11, sizeof(long), 1, rf); printf("%x\n", n11);

	fclose(rf);
}

void main()
{
	srand((unsigned)time(NULL));

	func113();
}