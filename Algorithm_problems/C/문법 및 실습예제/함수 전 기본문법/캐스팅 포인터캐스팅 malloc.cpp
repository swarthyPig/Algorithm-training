


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

	// int a = 3, b = 4;
	// short c = 5, d = 6;
	
	// a = b; // int = int
	// c = d; // short = short

	// a = (int)c; // int = short 4bite = 2bite, 캐스팅 굳이? 안해도됨

	// c = (short)a; // short = int 2bite = 4bite // 문제가 발생 할 확률 높음, 캐스팅 필수

  /*토끼 apple;
	거북이 banana;
	apple = (토끼)banana;

	호랑이 *orange;
	코끼리 *kiwi;
	orange = (호랑이 *)kiwi; (타입 * ) == 주소를 맞춰주는 것 */

   /*int *p;
	char *q;
	q = new char;

	p = (int *)q;

	short *t;
	t = (short *)p;
	*t = (short)*p;
	
	*/

	// 포인트쓰는 이유는 메모리를 공유, 할당 받기 위함이다.

	short *a;
	a = (short *)malloc(10); // malloc을 사용하려면 무조건 받는 타입으로 캐스팅 해줘야됨 
							 // 5바이트 사용 가능
	free(a); // 메모리 반환

	a = (short *)malloc(5 * sizeof(short)); // sizeof로 10바이트 살려줌
	free(a);
	a = new short[5]; //c++문법
	delete[]a;

	long *ptr;
	ptr = (long *)malloc(15 * sizeof(long));
	for (int i = 0; i < 15; i++) {
		*(ptr + i) = i;
	}
	for (int i = 0; i < 15; i++) {
		printf("%d\n", ptr[i]);
	}
	// malloc 으로 받고 delete로 해제 할 수 있는가? 없다.
	// malloc은 1개, 1개이상 구분이없다.

}