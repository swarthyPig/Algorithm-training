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

void showBinary(unsigned int num) { // num�� 9�� �������ٰ� ����
									//num = 9; // int 32bit 0000 0000 0000 0000 0000 0000 0000 1001
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

void main()
{
	srand((unsigned)time(NULL));

	//func108();
	//showBinary(20);//16����, 10����(Ȯ�κҰ�, ����� �ȳ���) �������
	//printf(" %d %x %p\n", 1234, 1234, 1234); // 16���� : 0x4D2, %p : 8�ڸ��� �� ������� ��, �ּҸ� ����� �� �����.
	//showBinary(1234);
	//showBinary(0x4D2);
	int a = 10;
	//printf("%d %d %x %p\n", a, &a, &a, &a); //(��, �ּ�, �ҹ���, �빮��)
	unsigned int b = 0x1234abcd; // 305,441,741
	//showBinary(b);

	UINT c = 0x000000ff; // unsigned int = UINT, 255

	UINT d = b & c;
	//showBinary(d); // 205

	//printf("%x %p\n", d, d); // Ư�� ��Ʈ�� �ɷ��� ����ϰ������ and ���

	UINT e = b & 0x0000ff00;
	//showBinary(e);

	//printf("%p\n", e);

	UINT f = b & 0xffff0000;
	//showBinary(f);

	UINT g = b & 0xff00;
	//showBinary(g);

	UINT h = b & 0xffffff00; // Ư����Ʈ (�ɷ��� = ����)��Ŵ ���� ��
	//showBinary(h);

	// <<:2������, >>:2�谨��
	UINT i = b << 8; // <<, >> 1byte�� �ڸ��̵��ض�
	//showBinary(b);
	//showBinary(i);

	UCHAR c1 = (b & 0xff000000) >> 24; // �ֻ��� 1byte�ɷ���
	//showBinary(c1);
	//printf("%x\n", c1);

	BYTE c2 = (b & 0x00ff0000) >> 16;
	//showBinary(c2);
	//printf("%x\n", c2);

	BYTE c3 = (b & 0x0000ff00) >> 8;
	//showBinary(c3);
	//printf("%x\n", c3);
}