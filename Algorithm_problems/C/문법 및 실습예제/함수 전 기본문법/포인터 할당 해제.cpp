#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u
void main()
{
	srand((unsigned)time(NULL));

	int *a;
	a = new int; // new 뒤에는 자기자신의 타입 말고는 들어올 수 가 없다. 메모리 1개 요구
	delete a; // 1개의 메모리 반환

	int *b;
	b = new int[6]; // 1개 이상 메모리 요구
	delete[]b; // 1개 이상 메모리 받았던거 반환
}


------------------------------------------------------------------------------------------------------------------------------------------

#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u
void main()
{
	srand((unsigned)time(NULL));

	int *a; // 포인터변수 선언

	a = new int; // int형 메모리 할당
	*a = 100; // 내용에 100넣음
	printf("%d %d\n", a, *a); // 출력 : 주소값, 내용값
	delete a; // 할당받은 메모리 반환

	int num = 200; // 일반변수에 값 200 저장
	a = &num; // 주소 = 주소, 일반 변수 num의 주소를 포인터변수 a의 주소에 공유
	printf("%d %d %d %d\n", a, *a, &num, num);//(주소, 값, 주소, 값)
	
	//delete a; //일반 변수 메모리는 해제가 안됨

	a = new int[6]; // num이랑 공유 안함, 직접 할당
	*(a + 0) = 10; // 선호되는 문법, 같은문법 -> *(a + 0), a[0], *a, *(a)
	a[1] = 20; // *(a + 1) = 20
	a[5] = 60; //  *(a + 5) = 60

	for (int i = 0; i < 6; i++) {
		//printf("%d %d\n", a+i,*(a+i)); //(주소,값)
		printf("%d %d\n", &a[i], a[i]); // 위와 같은 문법
	}printf("\n");

	delete[]a; //1개 이상 메모리 해제

	a = &num; //문제가 없지만 메모리 누수가 일어남 
	printf("%d %d\n", a, *a);
	// 메모리 반환 할 필요없음, 일반 변수는 메모리 해제 x
}


--------------------------------------------------------------------------------------------------------------------------------
	
#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u
void main()
{
	srand((unsigned)time(NULL));

	//char *g, h, *i; // 확보된 메모리 9바이트, 사용 할 수 있는 메모리는 1바이트(h)
	//short *d, e, *f; // 확보된 메모리는 10바이트, 사용 할 수있는 메모리는 2바이트(e),
	// 기본적으로 주소를 저장할 메모리 4바이트

	int *a, b = 100, *c; //확보된 메모리는 12바이트, 사용 할 수 있는 메모리는 4바이트(b) 
						 //*a = 100; 주소받기 전에는 사용 불가
	a = &b; // 주소 = 주소, 포인터 a가 b의주소를 공유받음
	c = a; // 주소 = 주소, 포인터 c가 a의 주소를 공유받음
	printf("%d %d %d\n", *a, b, *c); // (내용, 내용, 내용)
	printf("%d %d %d\n", a, &b, c); // (주소, 주소, 주소)

	c = new int; // 포인터변수 c가 메모리를 할당 받음
	a = c; // 주소 = 주소, 포인터변수 a가 c의주소를 공유받음
	*a = 30; //  포인터 a의 내용에 30을 넣음
	printf("%d %d\n", *a, *c); // (내용, 내용)

	delete a; //a와 c는 더 이상 사용 할 수 없음
	
	a = new int[1000];
	// a를 사용 함
	c = a;
	// c를 사용 함
	delete[]c; // 1개 이상일 때 해제

	printf("%d %d\n", *a, *c); // 여기서는 더이상 a와 c를 사용 할 수 없다.
}