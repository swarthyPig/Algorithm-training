#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void ex02() {
	/*
	  * * * * *
	  * 0 0 0 *
	  * 0 0 0 *
	  * * * * *
	*/
	printf("[2�� ����]\n");

	int cnt = 1;
	for (int i = 0; i < 4; i++) { // ����
	     for (int j = 0; j < 5; j++) { // ����

                      if ((cnt >= 7 && cnt <= 9) || (cnt >= 12 && cnt <= 14)) { // 7~9��° 12~14��° ���� �ϳ��� ���̸� ��
		printf("O ");
	         }
	         else {
		printf("* ");
  	         }
	         cnt++;
	    }printf("\n");
        }
}

void main()
{
	srand((unsigned)time(NULL));

	ex02();
}