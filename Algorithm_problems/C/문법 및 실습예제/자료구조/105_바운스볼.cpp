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

void func105_1() {
	for (int i = 0; i < 10; i++) {
		printf("%d", i);
		_sleep(1000); // 1�� ��
		system("cls"); // ������ �ܼ�â�� ��������
	}
}

void func105_2() {
	char map_01[3][4] = {
		'x','x','x','x',
		'x','x','x','x',
		'x','x','x','x'
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%c", map_01[i][j]);
		}printf("\n");
	}printf("\n");

	char map_02[3][4 + 1] = {//���ڿ��� �ְ������ �ڿ� +1 �߰�
		"xxxx",
		"xxxx",
		"xxxx"
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%c", map_02[i][j]);
		}printf("\n");
	}
}

void func105_3() { // �� �����

	char map[12][16 + 1] = {
		"################",
		"#..............#",
		"#..............#",
		"#..............#",
		"#..............#",
		"#..............#",
		"#..............#",
		"#..............#",
		"#..............#",
		"#..............#",
		"#..............#",
		"################"
	};

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 16; j++) {
			printf("%c ", map[i][j]);
		}printf("\n");
	}
}

void func105_4() { //  �ٿ�� �ڵ�
	int px = 4, py = 3;
	int dx = 1, dy = 1;

	while (true) {
		char map[12][16 + 1] = {
			"################",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"################"
		};

		if (px == 14) {
			dx = -1;
		}
		if (px == 1) {
			dx = 1;
		}

		if (py == 10) {
			dy = -1;
		}

		if (py == 1) {
			dy = 1;
		}
		px = px + dx;
		py = py + dy;

		map[py][px] = 'O';

		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 16; j++) {
				printf("%c ", map[i][j]);
			}printf("\n");
		}
		_sleep(340);
		system("cls");
	}
}

void func105_5() { // �ٿ �� 16*16

	int px = 5, py = 8;
	int dx = 1, dy = 1;

	while (true) {
		char map[16][16 + 1] = {
			"################",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"################"
		};

		if (px == 14) {
			dx = -1;
		}

		if (py == 14) {
			dy = -1;
		}

		if (px == 1) {
			dx = 1;
		}

		if (py == 1) {
			dy = 1;
		}

		px = px + dx;
		py = py + dy;

		map[px][py] = 'O';

		for (int i = 0; i < 16; i++) {
			for (int j = 0; j < 16; j++) {
				printf("%c ", map[i][j]);
			}printf("\n");
		}
		_sleep(340);
		system("cls");
	}
}
void func105_6() {
	int px = 4, py = 7;
	int dx = 1, dy = 1;

	while (true) {
		char map[16][16 + 1] = {
			"################",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#....#####.....#",
			"#....#...#.....#",
			"#....#...#.....#",
			"#....#####.....#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"#..............#",
			"################"
		};

		char a = map[py + dy][px + dx];
		char b = map[py][px + dx];
		char c = map[py + dy][px];

		if (a == '#') {
			if (b != '#' && c != '#') {
				dx = -dx;
				dy = -dy;
			}
			else {
				if (b == '#')
					dx = -dx;

				if (c == '#')
					dy = -dy;
			}
		}

		/*boolean a = map[py + dy][px + dx] == '#';
		boolean b = map[py][px + dx] == '#';
		boolean c = map[py + dy][px] == '#';

		if (a&&b&&c || a && (!b) && (!c)) {
		dx = -dx;
		dy = -dy;
		}

		if (a&&!b && c) {

		dy = -dy;
		}

		if (a&&b && !c) {
		dx = -dx;

		}*/
		px = px + dx;
		py = py + dy;

		map[py][px] = 'O';

		for (int i = 0; i < 16; i++) {
			for (int j = 0; j < 16; j++) {
				printf("%c ", map[i][j]);
			}printf("\n");
		}
		_sleep(300);
		system("cls");
	}
}

void main()
{
	srand((unsigned)time(NULL));
	
	//func105_1();
	//func105_2();
	//func105_3();
	//func105_4();
	//func105_5();
	func105_6();
}