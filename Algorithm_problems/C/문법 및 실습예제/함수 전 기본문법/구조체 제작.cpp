#include "stdafx.h"
#include <time.h>
#include <stdlib.h>

struct FRUIT { // ��Ģ�� �ƴ����� ������α׷��Ӵ� ����ü �̸��� �빮�ڷ� �ۼ�(�Ϲ��� ���)
	int color; // ���ٿ� �����ϳ��� �ۼ�(�Ϲ��� ���)
	int price;
	int original;
	int weight;
}; // FRUIT Ÿ��(User)

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d �ڵ� ���� // ctrl + k + d �ڵ� ����
// alt + ����Ű���Ʒ� : �̵�
// ��ü�ּ� : ctrl + k + c <---> ctrl + k + u

void main()
{
	srand((unsigned)time(NULL));

	int AppleColor, ApplePrice, AppleOriginal, AppleWeight; // �������, �������, ���������, �������
	int BananaColor, BananaPrice, BananaOriginal, BananaWeight;
	int OrangeColor, OrangePrice, OrangeOriginal, OrangeWeight;
	int MangoColor, MangoPrice, MangoOriginal, MangoWeight;
	int KiwiColor, KiwiPrice, KiwiOriginal, KiwiWeight;
	int melonColor, melonPrice, melonOriginal, melonWeight;
	// ����(Object)�� �Ӽ� : ����, ����, ������, ����
	// ����ü : �繰�� ����� �Ӽ��� �ϰ������� �����ϴ� ��
	// ����ü ������ :
	// 1. ����ü �̸��� �빮�ڷ� ����ϴ� ���� �����̴�.
	// 2. ����ü Ÿ������ ���ǵ� ������ ��ü��� �θ���.
	// 3. ����ü ������ �Ϲ������� #include ���� �Ʒ��� ���´�.
	// 4. ����ü�� �鸸���� ���� �޸𸮰� �Ҹ���� �ʴ´�.

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

