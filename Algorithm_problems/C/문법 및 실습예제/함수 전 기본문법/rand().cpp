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
	srand((unsigned)time(NULL)); // �õ尪�� �����ν� �Ź��ٸ� ���� �߻�

	printf("%d\n", rand()); //random ���, ��ȿ�� : shortŸ���� ��� 

	short num = rand(); 
	printf("%d\n", num);

	for (int a = 0; a < 10; a++){
		printf("%d ", rand()); 
		printf("%d ", rand() % 10); // 0~9���� ��� %100�̸� 0~100���� ���
	}printf("\n");

	for (int a = 0; a < 10; a++){
		short x = rand() % 100; // 0~100���� ���
		printf("%d ", x);
	}printf("\n");


	int ar[] = { 1, 6, 5, 9, 1, 2 };
	
	for (int a = 0; a < 3; a++) {  // ó���� �� ���ϱ�
		printf("%d\n", ar[a] + ar[5-a]);
	}printf("\n");

	int br[10];

	for (int a = 0; a < 10; a++) { // ������ ���Ű� ����� �׻� �и��� �Ǿߵȴ�.
		br[a] = rand() % 100; // 0~100������ �������� �迭�� �Է�
		printf("%d ", br[a]);
	}printf("\n");

	for (int a = 0; a < 10; a++) { // �������� �Էµ� �迭 ���
		printf("%d ", br[a]);
	}printf("\n");

	for (int a = 0; a < 5; a++) { // �������� �Էµ� �迭�� ó���� �� ���ϱ�
		printf("%d ", br[a] + br[9 - a]);
	}printf("\n");

}