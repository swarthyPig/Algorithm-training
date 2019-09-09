#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

//typedef int ROBOT;
//typedef int *LPROBOT;
//typedef int *PROBOT;
typedef int ROBOT, *LPROBOT, *PROBOT; // 한줄로 처리 가능

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void main()
{
	srand((unsigned)time(NULL));

	ROBOT a = 10; // typedef int ROBOT
	LPROBOT b = new ROBOT; // typedef int *LPROBOT
	PROBOT c = new ROBOT; // typedef int *PROBOT

	/*struct FRUIT {
	int color;
	int price;
	}; 백업 b.a.c.k.u.p*/

	/*typedef struct FRUIT {
	int color;
	int price;
	}TTT; */ // FRUIT, TTT 둘다 사용 가능, 구조체 별칭

	//typedef struct _FRUIT {
	//	int color;
	//	int price;
	//}FRUIT; // TTT , 구조체 별칭

	typedef struct tagFRUIT { //tag = '_' 둘다사용 가능, tag나 _ 는 밑에 여러개 선언 할때 사용
		int color;
		int price;
	}FRUIT, TTT, *LPFRUIT, *PFRUIT; // 

	 // 각 별칭으로 선언하여 사용하는 법
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