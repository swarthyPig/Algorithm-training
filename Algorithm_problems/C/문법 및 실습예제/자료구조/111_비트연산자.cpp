#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void showBinary(unsigned int num) { 
									
	printf("%x\n", num);
	int ar[32] = { 0, };

	for (int i = 0; i < 32; i++) {
		ar[32 - 1 - i] = num % 2; // �迭 ������ ���� ä��
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

void func111() {
	UINT a = 0x12345678; // 0001 0010 0011 0100 0101 0110 0111 1000
	UINT b = 0x00ff0000; // 0000 0000 1111 1111 0000 0000 0000 0000


	//showBinary(a | b); // 0001 0010 1111 1111 0101 0110 0111 1000

	UINT c = 0x000000AB; // 0000 0000 0000 0000 0000 0000 1010 1011
	UINT d = 0x00003400; // 0000 0000 0000 0000 0011 0100 0000 0000

    //printf("%p\n", c + d);
	//printf("%p\n", c | d); // ���� ����� ������ �� ����

	UINT e = 0x1234ABCD;
	e = e & e; // �ڱ��ڽ�
    //e = e & 0x0; // 0�� �ǹ���
	//printf("%p\n", e);

	UINT f = 0x1234ABCD;
	//showBinary(f);
	//showBinary(~f); // ��Ʈ ����

	UINT g = ~f;

	UINT h = 0x1234ABCD;
	showBinary(h);
	UINT i = 0x00000000;
	showBinary(i);

	UINT j = h ^ i; //���߿� �Ѱ��� �ٸ� �� �� (XOR)
	showBinary(j);

	// >>, <<, &, |, ~k ^
}

void main()
{
	srand((unsigned)time(NULL));

	func111();
}