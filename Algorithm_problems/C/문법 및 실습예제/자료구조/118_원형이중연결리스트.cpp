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

struct STRU {
	int a, b;
	STRU *left;
	STRU *rigth;
};
void func118() { // ����� ��ũ�帮��Ʈ
	STRU *head, *tail;
	STRU *node;

	node = new STRU; // 100����
	 //node->a = 10; // �� ���� ù ���� �Ⱥ��ڴ�.
	 //node->b = 20;

	head = node;

	node->left = node;
	node->rigth = node;

	/*
	node = new STRU; // 200����, ���� ����� �ּҴ� ��������� head�� ����Ǿ�����

	tail = node;

	node->a = 30;
	node->b = 40;

	node->left = head;
	node->rigth = head;

	head->rigth = node;
	head->left = node;
	*/

	tail = node;

	//--------------------------------------------------------------------------------------------------
	// ���⼭���� ù��° �����ͷ� ��
	int num = 10;
	for (int i = 0; i < num; i++) { // �Է��Լ�
		node = new STRU;

		node->a = i * 2 + 0;
		node->b = i * 2 + 1;

		node->left = tail;
		node->rigth = head;

		tail->rigth = node;
		head->left = node;

		tail = node;
	}

	num++;
	int nm = 8;
	STRU *temp1 = head;
	STRU *temp2 = head;
	for (int i = 0; i < nm; i++) {
		temp1 = temp1->rigth;
		temp2 = temp1->rigth;
	}

	node = new STRU;

	node->a = 88;
	node->b = 99;

	temp1->rigth = node;
	temp2->left = node;
	node->rigth = temp2;
	node->left = temp1;


	STRU *temp = head;
	for (int i = 0; i < num; i++) { // ����Լ�
		temp = temp->rigth;
		printf("%d %d\n", temp->a, temp->b);
	}
	/*node = new STRU; // 300����

	node->a = 50;
	node->b = 60;

	node->left = tail;
	node->rigth = head;

	tail->rigth = node;
	head->left = node;

	tail = node;

	node = new STRU; // 400����

	node->a = 70;
	node->b = 60;

	node->left = tail;
	node->rigth = head;

	tail->rigth = node;
	head->left = node;

	tail = node;
	*/
	delete node;
}

void main() {
	srand((unsigned)time(NULL));

	func118();
}