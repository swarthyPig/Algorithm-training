#include "stdafx.h"
#include <time.h>
#include <stdlib.h>

struct STRU {
	int a;
	int b[3];
	int *c;
};

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 코드 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

void main()
{
	srand((unsigned)time(NULL));

	STRU x, y[2], *z; //주소, 내용, 경우의수 18개

	x.a = 10; // x가 a를 제어
	printf("%d %d \n", x.a, &x.a); // (값출력, 주소출력) , &x.a : x안에 들어있는 a의 주소, 특수문자 2개 연속으로 못옴

	//----------------------------------------------------------------------------------------------------
	printf("\n");

	// x가 b[3] 제어
	x.b[0] = 10;
	x.b[1] = 20;
	x.b[2] = 30;

	for (int i = 0; i < 3; i++) {
		printf("%d %d\n", x.b[i], &x.b[i]);
	}

	//-------------------------------------------------------------------------------------------------------
	printf("\n");

	// x가 *c 제어 (3가지 방법)
	// 1. 공유
	int n1 = 40;

	x.c = &n1; // 공유받음 

	printf("%d %d %d\n", &n1, x.c, *x.c); // 원래 x.*c인데 특수문자 연속 사용불가 때문에 *x.c가됨
	printf("\n");		        // (n1의 주소, *c의주소, *c의 내용)

	// 2. 할당받음

	// 한 개 받을때
	x.c = new int;
	*x.c = 10; // 할당 받은 후 값을 넣을떄는 내용에 넣기, 내용 = 내용

	printf("%d %d\n", x.c, *x.c); // 주소,내용
	printf("\n");

	delete x.c; // 해제

	// 한개 이상 받을때 []로 쓰는거 추천
	x.c = new int[10]; // 할당 받고
	for (int i = 0; i < 10; i++) { // 입력
		x.c[i] = i * 10;
		// *(x.c + i) = i * 10; //위와 아래코드는 같은 내용임
	}

	for (int i = 0; i < 10; i++) { // 출력
		printf("%d %d\n", x.c[i], &x.c[i]); //(내용(*을 제거한 대신 []를 입힘),주소)
	}printf("\n");

	delete[]x.c;

	printf("\n");

	//----------------------------------------------------------------------------------------------
	//y[2]로 a를 제어
	y[0].a = 10;
	y[1].a = 20;

	printf("%d %d\n", y[0].a, &y[0].a); // (내용, 주소)
	printf("%d %d\n", y[1].a, &y[1].a); // (내용, 주소)
	printf("\n");

	// y[2]가 b[3]제어
	y[0].b[0] = 0;
	y[0].b[1] = 10;
	y[0].b[2] = 20;
	y[1].b[0] = 30;
	y[1].b[1] = 40;
	y[1].b[2] = 50;

	printf("%d %d\n", y[0].b[0], &y[0].b[0]); // (내용, 주소)
	printf("\n");

	for (int i = 0; i < 2; i++) { // 입력
		for (int j = 0; j < 3; j++) {
			y[i].b[j] = i * 3 + j;
		}
	}

	for (int i = 0; i < 2; i++) { // 출력
		for (int j = 0; j < 3; j++) {
			printf("%2d ", y[i].b[j]);
		}printf("\n");
	}
	printf("\n");

	//y[2]가 *c를 제어
	int n2 = 100;
	y[0].c = &n2; // 공유

	y[1].c = new int; // 할당
	y[0].c = new int[3]; // 할당

	// 메모리 3개 할당 건
	printf("%d %d\n", y[0].c[0], &y[0].c[0]); // (포인터 주소, 배열 주소)
	printf("%d %d\n", y[0].c[1], &y[0].c[1]); // (포인터 주소, 배열 주소)
	printf("%d %d\n", y[0].c[2], &y[0].c[2]); // (포인터 주소, 배열 주소)

	// 메모리 1개 할당 건
	printf("%d %d\n", *y[1].c, y[1]); //  (포인터주소, 배열값) y[1].a = 20; 을 선언해놓앗기 때문 
	printf("\n");

	delete[]y[0].c; //메모리 반환(3개받음)

	delete y[1].c; // 메모리 반환(1개받음)

	//*z 가 a 제어
	z = new STRU;

	//*z.a = 10; // 이렇게 적으면 오류, 컴파일러는 앞에 *이 a에서 넘어온걸로 생각한다. 앞에 *은 z의 별이므로 이런식일때는
	// ->을 사용하여 나타낸다.
	z->a = 10; // z는 *이다

	printf("%d %d %d\n", z, z->a, &z->a); // (z의 주소, 내용, 주소 ) *z는 %d로 쓸수없다

	// *z 가 b[3] 제어
	z->b[0] = 10;
	z->b[1] = 10;
	z->b[2] = 30;

	printf("%d %d\n", z->b[0], &z->b[0]); // 내용 , 주소
	printf("%d %d\n", z->b[1], &z->b[1]); // 내용 , 주소
	printf("%d %d\n", z->b[2], &z->b[2]); // 내용 , 주소
	printf("\n");

	delete z; //  메모리반환

	// *z 가 *c제어
	/*
	z  c
	1  1   -> z도 한개 c도 한개
	1  n   -> z는 1개 c는 1개이상
	n  1   -> z도 한개이상 c는 1개
	n  n   -> z도 한개이상 c도 한개이상
	*/
	// 1번(1 1)
	z = new STRU;
	z->c = new int;

	*z->c = 100; // 내용에 100 넣음

	printf("%d %d\n", *z->c, z->c); //(내용, 주소)
	printf("\n");

	delete z->c;
	delete z;

	// 2번(1 n)

	/* z = new STRU;
	z->c = new int[3];

	z->c[0] = 10;
	z->c[1] = 20;
	z->c[2] = 30;

	for (int i = 0; i < 3; i++) {
	printf("%d %d\n", z->c[i], &z->c[i]);
	}
	delete []z->c;
	delete z;
	내가 한거 */

	z = new STRU;
	z->c = new int[3];

	z->c[0] = 10;
	z->c[1] = 20;
	z->c[2] = 30;

	printf("%d %d\n", z->c[2], &z->c[2]); // 내용 , 주소
	printf("\n");

	delete[]z->c;
	delete z;

	// 3번(n 1)
	z = new STRU[3]; // []로 함
	z[2].c = new int;

	*z[2].c = 99; // 내용에 넣음
	printf("%d %d\n", *z[2].c, z[2].c); // 내용, 주소
	printf("\n");

	delete z[2].c;
	delete[]z;

	// 4번(n n)
	z = new STRU[2];
	z[0].c = new int[3];
	z[1].c = new int[5];

	z[0].c[0] = 10;
	z[0].c[2] = 20;
	z[1].c[0] = 30;
	z[1].c[4] = 40; // z[1].c[4] = *((z + 1)->c + 4) = (z + 1)->c[4]같은문법
	*((z + 1)->c + 4) = 40;

	printf("%d %d\n", z[1].c[4], &z[1].c[4]); // 밑과 같은 문법, (내용, 주소)
	printf("%d %d\n", *((z + 1)->c + 4), ((z + 1)->c + 4)); // (내용, 주소)
	printf("\n");

	delete[]z[1].c; // 거꾸로 메모리 반환
	delete[]z[0].c;
	delete[]z;
}