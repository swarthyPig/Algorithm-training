#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

struct POINT76 {
	int xpos;
	int ypos;
};

void func76() {
	POINT76 p1;
	p1.xpos = 10;
	p1.ypos = 20;

	printf("%d %d\n", p1.xpos, p1.ypos);

	POINT76 p2 = { // �̷����� �ʱ�ȭ ��� ���� ���, �ظ��ؼ��� �����ٷ� ó��
		10,
		20
	};
	printf("%d %d\n", p2.xpos, p2.ypos);

	POINT76 p3;
	p3 = { // ǥ���� �ƴ�
		10,
		20
	};
	printf("%d %d\n", p3.xpos, p3.ypos);

	POINT76 p4 = {
		1,
		2
	};

	POINT76 p5 = {
		3,
		4
	};

	float distance =
		(p4.xpos - p5.xpos)*(p4.xpos - p5.xpos) + // ( 1 - 3 ) * ( 1 - 3)
		(p4.ypos - p5.ypos)*(p4.ypos - p5.ypos);  // ( 2 - 4 ) * ( 2 - 4 )

	printf("%f\n", distance);

	distance = sqrt(distance); // ������

	printf("%f\n", distance);
}

void main()
{
	srand((unsigned)time(NULL));

	func76();

}