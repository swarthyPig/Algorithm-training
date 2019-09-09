#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

struct STRU38 {
	int *num;
};
// 포인터변수 구조체 함수 인수 전달 방법
void func38(STRU38 x, STRU38 *y) {
	printf("%d %d\n", x.num, *x.num);  // 일반변수로 받은 포인터 주소, 값
	printf("%d %d\n", y->num, *y->num); // 포인터변수로 받은 포인터 주소, 값
	//delete x.num; // 위랑 아래랑 같은 메모리 주소 해제임.
	//delete y->num; // 해제는 메인해서 해줌
}

void main()
{
	srand((unsigned)time(NULL));

	STRU38 st38;
	// *st38.num = 100; // 주소 받은 적이없다
	st38.num = new int; // 할당
	*st38.num = 100; // 값넣기
	func38(st38, &st38); // 내용과, 주소 전달
	delete st38.num; // 해제
}