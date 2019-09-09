#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 함수에서 함수를 부를 수 있다.(밑에꺼에서 위에꺼를 부름)
void func47_1() {
	printf("호랑이\n");
}
void func47_2() {
	printf("코끼리\n");
	func47_1();  //밑에서 위에 있는 함수 호출 가능
	printf("앵무새\n");
}

void main()
{
	srand((unsigned)time(NULL));

}#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

// 함수에서 함수를 부를 수 있다.(밑에꺼에서 위에꺼를 부름)
void func47_1() {
	printf("호랑이\n");
}
void func47_2() {
	printf("코끼리\n");
	func47_1();  //밑에서 위에 있는 함수 호출 가능
	printf("앵무새\n");
}

void main()
{
	srand((unsigned)time(NULL));

}