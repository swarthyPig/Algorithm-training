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

char ar[12][16]; //[����][����]

void func115_1(char ch) { // �迭�� ��('.') �ֱ�

	for (int i = 0; i < 12; i++) { // ����
		for (int j = 0; j < 16; j++) { // ����
			ar[i][j] = ch;
		}
	}
}
void func115_2() { // �迭 ��('.') ���

	for (int i = 0; i < 12; i++) { // ����
		for (int j = 0; j < 16; j++) { // ����
			printf("%c ", ar[i][j]);
		}printf("\n");
	}printf("\n");
}

void func115_3() { // ar[3][4]�� '#' �ֱ�
	int x = 3; 
	int y = 4; 

	ar[x][y] = '#';
	func115_2();
}

void func115_4(int x, int y, int yLen, char ch) {
	// func115_4(2,3,5,'#');

	for (int i = 0; i < yLen; i++) {
		ar[y][x + i] = ch;
	}
}

void func115_5(int x, int y, int xLen, char ch) {
	// func115_5(6,2,6,'O');

	for (int i = 0; i < xLen; i++) {
		ar[y + i][x] = ch;
	}

	func115_2();
}

void func115_6(int x1, int y1, int x2, int y2, char ch) { // �׸� �����
	// func115_6(2, 3, 6, 9, '#');

	int xLen = x2 - x1; // 6 - 2 = 4
	int yLen = y2 - y1; // 9 - 3 = 6

	for (int i = 0; i < xLen + 1; i++) {
		for (int j = 0; j < yLen + 1; j++) {
			ar[y1][x1 + i] = ch; // ar[3][2+i] ����
			ar[y1 + j][x1] = ch; // ar[3+j][2] ����
			ar[y2][x2 - i] = ch; // ar[9][6-i] ����
			ar[y2 - j][x2] = ch; // ar[9-j][6] ����
		}
	}
	func115_2();
}

void func115_7(int x1, int y1, int x2, int y2, char ch) { // ������ �׸� �����
	// func115_7(2, 3, 6, 9, '#');

	int xLen = x2 - x1;
	int yLen = y2 - y1;

	for (int i = 0; i < xLen + 1; i++) {
		for (int j = 0; j < yLen + 1; j++) {
			ar[y1 + j][x1 + i] = ch;
		}
	}
	func115_2();
}

void func115_8(int x, int y, char ch) { // ���ڰ� �����
	// func115_8(2, 3, '#');

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 16; j++) {
			//ar[i][y] = ch;
			//ar[x][j] = ch;
			if (x == i || y == j) {
				ar[i][j] = ch;
			}
		}
	}
	func115_2();
}

void func115_9(int x, int y, char ch) { // xǥ �����
	//func115_9(4, 8, '#');

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 16; j++) {
			if (y + x == i + j || y - x == i - j) {
				ar[i][j] = ch;
			}
		}
	}
	func115_2();
}

void func115_10(int x, int y, char ch) { // M�� �߽����� ������� ����� 
	//func115_10(3, 7, '#');

	int dx;
	int dy;
	ar[y][x] = 'M'; // [7][3]
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 16; j++) {

			dy = abs(y - i); // 7, 6, 5, 4, 3, 2, 1, 0, 1, 2, 3, 4
			dx = abs(x - j); // 3, 2, 1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12

			// ��Ⱑ �־�� �� �ε��� : 
			// [5][2]([y-2][x-1]), [5][4]([y-2][x+1]), 
			// [6][1]([y-1][x-2]), [6][5]([y-1][x+2]), 
			// [8][1]([y+1][x-2]), [8][5]([y+1][x+2]), 
			// [9][2]([y+2][x-1]), [9][4]([y+2][x-1])
			if (dx + dy == 3 && abs(dx - dy) == 1) {
				ar[i][j] = ch;
			}
		}
	}
	func115_2();
}

void main() {
	srand((unsigned)time(NULL));

	func115_1('.');
	//func115_2();
	//func115_3();
	//func115_4(2,3,5,'#');
	//func115_5(6,2,6,'O');
	//func115_6(2, 3, 6, 9, '#');
	//func115_7(2, 3, 6, 9, '#');
	//func115_8(2, 3, '#');
	//func115_9(4, 8, '#');
	//func115_10(3, 7, '#');
}#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

char ar[12][16]; //[����][����]

void func115_1(char ch) { // �迭�� ��('.') �ֱ�

	for (int i = 0; i < 12; i++) { // ����
		for (int j = 0; j < 16; j++) { // ����
			ar[i][j] = ch;
		}
	}
}
void func115_2() { // �迭 ��('.') ���

	for (int i = 0; i < 12; i++) { // ����
		for (int j = 0; j < 16; j++) { // ����
			printf("%c ", ar[i][j]);
		}printf("\n");
	}printf("\n");
}

void func115_3() { // ar[3][4]�� '#' �ֱ�
	int x = 3; 
	int y = 4; 

	ar[x][y] = '#';
	func115_2();
}

void func115_4(int x, int y, int yLen, char ch) {
	// func115_4(2,3,5,'#');

	for (int i = 0; i < yLen; i++) {
		ar[y][x + i] = ch;
	}
}

void func115_5(int x, int y, int xLen, char ch) {
	// func115_5(6,2,6,'O');

	for (int i = 0; i < xLen; i++) {
		ar[y + i][x] = ch;
	}

	func115_2();
}

void func115_6(int x1, int y1, int x2, int y2, char ch) { // �׸� �����
	// func115_6(2, 3, 6, 9, '#');

	int xLen = x2 - x1; // 6 - 2 = 4
	int yLen = y2 - y1; // 9 - 3 = 6

	for (int i = 0; i < xLen + 1; i++) {
		for (int j = 0; j < yLen + 1; j++) {
			ar[y1][x1 + i] = ch; // ar[3][2+i] ����
			ar[y1 + j][x1] = ch; // ar[3+j][2] ����
			ar[y2][x2 - i] = ch; // ar[9][6-i] ����
			ar[y2 - j][x2] = ch; // ar[9-j][6] ����
		}
	}
	func115_2();
}

void func115_7(int x1, int y1, int x2, int y2, char ch) { // ������ �׸� �����
	// func115_7(2, 3, 6, 9, '#');

	int xLen = x2 - x1;
	int yLen = y2 - y1;

	for (int i = 0; i < xLen + 1; i++) {
		for (int j = 0; j < yLen + 1; j++) {
			ar[y1 + j][x1 + i] = ch;
		}
	}
	func115_2();
}

void func115_8(int x, int y, char ch) { // ���ڰ� �����
	// func115_8(2, 3, '#');

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 16; j++) {
			//ar[i][y] = ch;
			//ar[x][j] = ch;
			if (x == i || y == j) {
				ar[i][j] = ch;
			}
		}
	}
	func115_2();
}

void func115_9(int x, int y, char ch) { // xǥ �����
	//func115_9(4, 8, '#');

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 16; j++) {
			if (y + x == i + j || y - x == i - j) {
				ar[i][j] = ch;
			}
		}
	}
	func115_2();
}

void func115_10(int x, int y, char ch) { // M�� �߽����� ������� ����� 
	//func115_10(3, 7, '#');

	int dx;
	int dy;
	ar[y][x] = 'M'; // [7][3]
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 16; j++) {

			dy = abs(y - i); // 7, 6, 5, 4, 3, 2, 1, 0, 1, 2, 3, 4
			dx = abs(x - j); // 3, 2, 1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12

			// ��Ⱑ �־�� �� �ε��� : 
			// [5][2]([y-2][x-1]), [5][4]([y-2][x+1]), 
			// [6][1]([y-1][x-2]), [6][5]([y-1][x+2]), 
			// [8][1]([y+1][x-2]), [8][5]([y+1][x+2]), 
			// [9][2]([y+2][x-1]), [9][4]([y+2][x-1])
			if (dx + dy == 3 && abs(dx - dy) == 1) {
				ar[i][j] = ch;
			}
		}
	}
	func115_2();
}

void main() {
	srand((unsigned)time(NULL));

	func115_1('.');
	//func115_2();
	//func115_3();
	//func115_4(2,3,5,'#');
	//func115_5(6,2,6,'O');
	//func115_6(2, 3, 6, 9, '#');
	//func115_7(2, 3, 6, 9, '#');
	//func115_8(2, 3, '#');
	//func115_9(4, 8, '#');
	//func115_10(3, 7, '#');
}