#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

//typedef int ROBOT;
//typedef int *LPROBOT;
//typedef int *PROBOT;
typedef int ROBOT, *LPROBOT, *PROBOT; // ���ٷ� ó�� ����

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void main()
{
	srand((unsigned)time(NULL));

	ROBOT a = 10; // typedef int ROBOT
	LPROBOT b = new ROBOT; // typedef int *LPROBOT
	PROBOT c = new ROBOT; // typedef int *PROBOT

	/*struct FRUIT {
	int color;
	int price;
	}; ��� b.a.c.k.u.p*/

	/*typedef struct FRUIT {
	int color;
	int price;
	}TTT; */ // FRUIT, TTT �Ѵ� ��� ����, ����ü ��Ī

	//typedef struct _FRUIT {
	//	int color;
	//	int price;
	//}FRUIT; // TTT , ����ü ��Ī

	typedef struct tagFRUIT { //tag = '_' �Ѵٻ�� ����, tag�� _ �� �ؿ� ������ ���� �Ҷ� ���
		int color;
		int price;
	}FRUIT, TTT, *LPFRUIT, *PFRUIT; // 

	 // �� ��Ī���� �����Ͽ� ����ϴ� ��
	FRUIT f1;
	f1.color = 10;
	f1.price = 20;

	TTT f2;
	f2.color = 30;
	f2.price = 40;

	LPFRUIT f3;
	f3 = new FRUIT;
	f3->color = 50;
	f3->price = 60;
	delete f3;

	SIZE s;

	typedef struct tagANIMAL {
		int xx;
		int yy;
	}ANIMAL, *PANIMAL, *LPANIMAL;
}