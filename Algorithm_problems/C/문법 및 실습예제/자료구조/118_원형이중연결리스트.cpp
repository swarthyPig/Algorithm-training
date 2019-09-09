#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

struct STRU {
	int a, b;
	STRU *left;
	STRU *rigth;
};
void func118() { // 양방향 링크드리스트
	STRU *head, *tail;
	STRU *node;

	node = new STRU; // 100번지
	 //node->a = 10; // 이 노드는 첫 노드로 안보겠다.
	 //node->b = 20;

	head = node;

	node->left = node;
	node->rigth = node;

	/*
	node = new STRU; // 200번지, 위의 노드의 주소는 사라지지만 head에 백업되어있음

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
	// 여기서부터 첫번째 데이터로 씀
	int num = 10;
	for (int i = 0; i < num; i++) { // 입력함수
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
	for (int i = 0; i < num; i++) { // 출력함수
		temp = temp->rigth;
		printf("%d %d\n", temp->a, temp->b);
	}
	/*node = new STRU; // 300번지

	node->a = 50;
	node->b = 60;

	node->left = tail;
	node->rigth = head;

	tail->rigth = node;
	head->left = node;

	tail = node;

	node = new STRU; // 400번지

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