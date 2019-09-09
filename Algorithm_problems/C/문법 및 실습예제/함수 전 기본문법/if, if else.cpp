#include "stdafx.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS


void main()
{
	printf("시작");

	if (1) { // 0이 아니므로 참
		printf("호랑이");
		printf("코끼리");
	}

	printf("끝");

	
	printf("시작");

	/*if (0) { // 거짓이므로 실행 안됨
	printf("호랑이");
	printf("코끼리");
	}

	printf("끝");*/
	

	int input;
	scanf("%d", &input);

	if (input % 2 == 0) { // 짝수
	printf("입력한 숫자는 짝수 입니다.");
	}

	if (input % 2 == 1) { // 홀수
	printf("입력한 숫자는 홀수 입니다.");
	}

	int input1;
	scanf("%d", &input1);

	if (input1 % 4 == 0) { // 4의 배수
		printf("입력한 숫자는 짝수 입니다.");
	}
	else { // !4의배수
		printf("입력한 숫자는 홀수 입니다.");
	}

	int input2;
	scanf("%d", &input2);

	if (input2 >= 90) {
		printf("A\n");
	}
	else if (input2 >= 80) {
		printf("B\n");
	}
	else if (input2 >= 70) {
		printf("C\n");
	}
	else {
		printf("F\n");
	}



	if (3 < 2); { // 세미콜론을 잘못 붙였을때 일어날 수 있는 상황
		  // 3<2 는 거짓이라서 안의 출력문이 출력되지않아아 하지만 세미콜론을 잘못 붙였기 때문에 출력됨
		printf("호랑이\n");
	}
	if (3 < 2) {
	};
	{ // 세미콜론을 잘못 붙였을때 일어날 수 있는 상황
		printf("호랑이\n");
	}


	//이 4문장은 모두 같은 문장
	if (true) {
		printf("호랑이");
	}
	if (true) {
		printf("호랑이");
	};

	if (true)
		printf("호랑이");

	if (true) printf("호랑이");
}v