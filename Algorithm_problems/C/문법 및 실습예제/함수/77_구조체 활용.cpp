#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

struct PERSON77 {
	char name[20];
	char phoneNum[20];
	int age;
};
void func77() {
	PERSON77 p1; // ���Ʒ� ����¶Ȱ���
	struct PERSON77 p2; // ��������

	PERSON77 p3 = {
		"������",
		"20372229",
		24
	};
	printf("%s %s %d\n", p3.name, &p3.phoneNum[0], p3.age);

	PERSON77 p4;
	// p4.name = "ȫ�浿"; // �Ϲݺ����� �ּ� ���� �� ����.
	strcpy(p4.name, "ȫ�浿");
	strcpy(p4.phoneNum, "ȫ�浿");

	printf("%s %s %d\n", p4.name, &p4.phoneNum[0], p3.age);

}

void main()
{
	srand((unsigned)time(NULL));

	func77();

}