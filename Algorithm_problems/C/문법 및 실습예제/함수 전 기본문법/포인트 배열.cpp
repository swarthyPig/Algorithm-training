#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u
void main()
{
	srand((unsigned)time(NULL));

	int *ptr[3]; // == int *ptr0, *ptr1, *ptr2 , ������ �迭
		 // 0���̵� 1���̵� 2���̵� ��δ� �������� �� �ְ� �޸� �Ѱ�, �Ѱ��̻�
		 // ���� �� �ִ�.
	int n = 10;
  	/*ptr[0] = new int[5];
	  ptr[1] = new int[5];
	  ptr[2] = new int[5];
  	*/
	for (int i = 0; i < 3; i++) {     // ptr[0] = new int[n];
		ptr[i] = new int[n]; // ptr[1] = new int[n];
	}		           // ptr[2] = new int[n];

	//[0 0] [0 1] [0 2] [0 3] [0 4]
	//[1 0] [1 1] [1 2] [1 3] [1 4]
	//[2 0] [2 1] [2 2] [2 3] [2 4]
	// �� �ڵ� ���ĺ��ʹ� int ptr[3][5]; ��� ������ �����ѰͰ� �Ȱ���
	// int ptr[����][����];

	*(ptr[0] + 0) = 10; // ptr[0][0]
	*(ptr[0] + 1) = 20; // ptr[0][1]
	*(ptr[0] + 2) = 30; // ptr[0][2]
	*(ptr[0] + 3) = 40; // ptr[0][3]
	*(ptr[0] + 4) = 50; // ptr[0][4]

	for (int i = 0; i < 3; i++) { // ����
		for (int j = 0; j < n; j++) // ����
		{
			ptr[i][j] = i * n + j; //  0  1  2  3  4  5  6  7  8  9
				          // 10 11 12 13 14 15 16 17 18 19
			 	           / 20 21 22 23 24 25 26 27 28 29             
		}
	}

	for (int i = 0; i < 3; i++) { // ����
		for (int j = 0; j < n; j++) // ����
		{
			//printf("%2d ", ptr[i][j]);
			//printf("%2d ", *(ptr[i]+j));
			printf("%2d ", *(*(ptr + i) + j)); // 2���� �����Ϳ����� **���
		}printf("\n");
	}
	/*delete[]ptr[0];
	  delete[]ptr[1];
	  delete[]ptr[2];*/
	for (int i = 0; i < 3; i++) { // for���� ����Ͽ� �ѹ��� �޸� ��ȯ
		delete[]ptr[i];
	}
}