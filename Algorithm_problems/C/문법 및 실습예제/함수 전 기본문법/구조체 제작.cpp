#include "stdafx.h"
#include <time.h>
#include <stdlib.h>

struct FRUIT { // 규칙은 아니지만 모든프로그래머는 구조체 이름을 대문자로 작성(암묵적 약속)
	int color; // 한줄에 변수하나만 작성(암묵적 약속)
	int price;
	int original;
	int weight;
}; // FRUIT 타입(User)

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void main()
{
	srand((unsigned)time(NULL));

	int AppleColor, ApplePrice, AppleOriginal, AppleWeight; // 사과색깔, 사과가격, 사과원산지, 사과무게
	int BananaColor, BananaPrice, BananaOriginal, BananaWeight;
	int OrangeColor, OrangePrice, OrangeOriginal, OrangeWeight;
	int MangoColor, MangoPrice, MangoOriginal, MangoWeight;
	int KiwiColor, KiwiPrice, KiwiOriginal, KiwiWeight;
	int melonColor, melonPrice, melonOriginal, melonWeight;
	// 과일(Object)의 속성 : 색깔, 가격, 원산지, 무게
	// 구조체 : 사물의 공통된 속성을 일괄적으로 관리하는 것
	// 구조체 주의점 :
	// 1. 구조체 이름은 대문자로 사용하는 것이 관례이다.
	// 2. 구조체 타입으로 정의된 변수를 객체라고 부른다.
	// 3. 구조체 선언은 일반적으로 #include 문장 아래에 적는다.
	// 4. 구조체는 백만개를 만들어도 메모리가 소모되지 않는다.

	FRUIT apple, banana, orange, mango, kiwi, melon;
	apple.color = 10;
	apple.price = 20;
	apple.original = 20;
	apple.weight = 40;

	printf("%d ", apple.color);
	printf("%d ", apple.price);
	printf("%d ", apple.original);
	printf("%d\n", apple.weight);

	kiwi.color = 10;
	kiwi.price = 20;
	kiwi.original = 20;
	kiwi.weight = 40;

	printf("%d ", kiwi.color);
	printf("%d ", kiwi.price);
	printf("%d ", kiwi.original);
	printf("%d ", kiwi.weight);
	
}

