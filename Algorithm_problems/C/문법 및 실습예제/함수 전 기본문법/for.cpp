
	#include "stdafx.h"
	#pragma warning(disable:4996)
	#define _CRT_SECURE_NO_WARNINGS


	void main()
	{
	// for(초기, 조건, 증감)
	for (int a = 0; a < 10; a++) { // a를 0부터 9까지 변경하면서 출력

		printf("호랑이%d\n", a);
	}

	for (int a = 1; a <= 10; a++) { // a를 1부터 10까지 변경하면서 출력

		printf("사자%d\n", a);
	}

	for (int a = -2; a <= 2; a++) { // a를 -2부터 2까지 변경하면서 출력

		printf("수달%d\n", a);
	}

	int input;
	scanf_s("%d", &input); // 단수를 입력하면 구구단을 출력함

	for (int a = 0; a < 10; a++) {

		printf("%d*%d=%d\n", input, a, input*a);
	}

	}

--------------------------------------------------------------------------------------------------------------

	
	#include "stdafx.h"
	#pragma warning(disable:4996)
	#define _CRT_SECURE_NO_WARNINGS


	void main()
	{
	int s = 0;

	for (int a = 1; a <= 10; a++) { // a를 1부터 10이하까지 1씩 증가시키면서 s에다가 더함

		//s = s + a;
		s += a;

		printf("%d\n", s);// 진행과정을 보고싶을 때
	}
	//a++; 

	s++; // 이런식으로 1증가시킬 수 있음
	printf("%d\n", s);
	printf("-----------------------------------\n");

	{ //지역변수로 괄호안에 넣어서 출력 괄호를 벗어나면 메모리가 반환됨
		int b = 10;
		printf("%d\n", b);
	} // 지역변수
	  //b++

	{
		int b = 30; // 메모리 반환이 된 이후에 같은이름 변수 가능
	}

	for (int a = 0; a < 10; a++) { // for 문을 사용하여 apple을 10번 출력
		printf("apple\n");
	}
	int c = 3; // d에대하여 상대적으로 전역변수
	{ // 괄호 안은 지역변수
		int d = 4;
		printf("%d%d\n", c, d);
	}
	printf("%d%d\n", c); // 괄호 밖에 잇으므로 괄호가 끝나도 변수의 메모리가 유효함

	int e = 3;
	{ // 전역변수와 지역변수의 이름이 같을때 괄호의 효과
		int e = 4;
		printf("%d\n", e);
	}
	printf("%d\n", e);

	}
