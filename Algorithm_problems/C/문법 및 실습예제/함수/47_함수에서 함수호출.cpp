#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// �Լ����� �Լ��� �θ� �� �ִ�.(�ؿ������� �������� �θ�)
void func47_1() {
	printf("ȣ����\n");
}
void func47_2() {
	printf("�ڳ���\n");
	func47_1();  //�ؿ��� ���� �ִ� �Լ� ȣ�� ����
	printf("�޹���\n");
}

void main()
{
	srand((unsigned)time(NULL));

}#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d ��ü �ڵ� ���� // ctrl + k + f ��Ϻκи� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

// �Լ����� �Լ��� �θ� �� �ִ�.(�ؿ������� �������� �θ�)
void func47_1() {
	printf("ȣ����\n");
}
void func47_2() {
	printf("�ڳ���\n");
	func47_1();  //�ؿ��� ���� �ִ� �Լ� ȣ�� ����
	printf("�޹���\n");
}

void main()
{
	srand((unsigned)time(NULL));

}