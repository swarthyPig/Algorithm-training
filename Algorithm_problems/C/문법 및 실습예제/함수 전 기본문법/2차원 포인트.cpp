

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

	int *ptr[3]; //���� 3��
	ptr[0] = new int[4];
	ptr[1] = new int[4];
	ptr[2] = new int[4];

	int ar[3][4] = { 0, }; // �迭�� 0���� ä��
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%2d ", &ar[i][j]); // �迭�̶� �޸� �ּҰ� �������̴�
			printf("%2d ", &ptr[i][j]); // ����Ʈ�� �޸� �ּҰ� �����������ʴ�
		}printf("\n");
	}printf("\n");

	int *pp = &ar[0][0]; // ������ �迭 pp�� �迭 ar�� [0][0]�� �ּҰ��� ����, ���ٷ� �����ϰ� ����
	for (int i = 0; i < 12; i++) {
		printf("%d ", pp[i]);
	}

	// int *tt = &ptr[0][0]; // �̷��� ��� �Ұ��� �޸𸮰� ���������� ���� �����͹迭�� ����߱� ����
	// **�� �ּҸ� 2�� �޾ƾ� ��� �����ϴ�     
	// �ּҸ� �ι������� 2�����迭ó�� ��� �� �� �־ ����.
	// 1. �ּ�->int ptr[];(���α���)
	// 2. �ּ�->(���α���);(1���� Ȯ���Ǿ��� ��)
}

----------------------------------------------------------------------------------------------------------------------------------


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

	//        ���� ����
	// [] []    0    0
	// *  []    x    0
	// *  *     x    x
	//          0    x
	// 2���� �����͸� ��� �Ҷ�(int **ptr;) 1. �Լ�, 2.���α��̿� ���α��̸� �� ��

	int **apple; //3��° ����(���α��� ���α��� �Ѵ� �� ��)
	apple = new int *[3]; // �� �ڵ� ���� ���α��� Ȯ��
	 //�� �ڵ� ���� int *apple[3]; �� ������ �ڵ�

	for (int i = 0; i < 3; i++) {
		apple[i] = new int[4];
	}
	// �� �ڵ� ���� apple[3][4]��� ������ ���̶� �Ȱ���

	for (int i = 0; i < 3; i++) { // �Է�
		for (int j = 0; j < 4; j++) {
			apple[i][j] = i * 4 + j;
		}
	}

	for (int i = 0; i < 3; i++) { // ���
		for (int j = 0; j < 4; j++) {
			printf("%2d ", apple[i][j]);
		}printf("\n");
	}

	for (int i = 0; i < 3; i++) { // �޸� ��ȯ
		delete[]apple[i];
	}

	delete[]apple; // �޸� ��ȯ
}
	

---------------------------------------------------------------------------------------------------------------------------------

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

	int(*ptr)[4];  //4��° ���� ���α��� ���� ���� ��
	ptr = new int[3][4]; // ���⼭ 3�� ���α��̸� �����Ѵ�
	// �� �ڵ� ���� int ptr[3][4]; �� ������ ������ �����̴�.

	// 0���� 11���� �����͸� ����
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
		{
			ptr[i][j] = i * 4 + j;
		}
	}
	// �����͸� ������� 
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {

			printf("%2d ", ptr[i][j]);
		}printf("\n");
	}

	delete[]ptr; // �޸� ��ȯ
}
