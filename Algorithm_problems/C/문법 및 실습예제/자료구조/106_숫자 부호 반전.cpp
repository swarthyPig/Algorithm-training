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

void func106() {

	int n1 = 0;
	for (int i = 0; i < 10; i++) {// 0�� 1�� �����Ǿ ���
		n1 = 1 - n1; // 0�� 1�� �����Ǿ ���
					 //n1 = 5 - n1; // 0�� 5�� �����Ǿ ���
		printf("%d ", n1);
	}printf("\n");

	int n2 = 1;
	for (int i = 0; i < 10; i++) { // ��ȣ�� �ٲ㰡�鼭 ���
	           //n2 = -n2;
		n2 = -1 * n2;
		printf("%d ", n2);
	}printf("\n");

	boolean n3 = false;
	for (int i = 0; i < 10; i++) { // 0�� 1�� �����Ǿ ���
		n3 = !n3;
		printf("%d ", n3);
	}printf("\n");
}

void main()
{
	srand((unsigned)time(NULL));
	
	func106();
}