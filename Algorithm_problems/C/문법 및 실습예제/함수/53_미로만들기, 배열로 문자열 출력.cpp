#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void func53() {
	char ar[4]; // 4
	char br[4] = { 'A', 'B', 'C', 'D' }; //4
	char cr[] = { 'A', 'B', 'C', 'D' }; //4
	char dr[] = "ABCD"; // ���ڿ��� ����־��� �� �޸𸮸� �ϳ����� //5
	printf("%d %d %d %d\n", sizeof(ar), sizeof(br), sizeof(cr), sizeof(dr));
	printf("%s\n", br); // �̷�������ϴ� ���� ��������, ���� ������ ����
	printf("%s\n", dr);

	char er[3][4] = { // �̷�ã�� �˰���
		'#','#','#','#',
		'#','.','.','#',
		'#','#','#','#'
	};

	char fr[8][12 + 1] = { // �̷�ã�� �˰���, ���ڿ��� �ϳ� �� �ʿ���, �迭 ũ��������� ���ΰ��� 
		"############",
		"#..........#",
		"#..........#",
		"#..........#",
		"#..........#",
		"#..........#",
		"#..........#",
		"############"
	};

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 12 + 1; j++) {
			printf("%c ", fr[i][j]);
		}printf("\n");
	}
}

void main()
{
	srand((unsigned)time(NULL));

	func53();
}