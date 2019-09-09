#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u


void func73() {
	char ar[] = "apple";
	char br[30] = "banana";
	// 두 문자열을 하나로 합쳐줌
	// 저장할 메모리의 공간이 충분해야된다
	strcat(br, ar); // 2개를 더해서 br이 가짐
  //strcat(ar,br); // 2개를 더해서 ar이 가짐
	printf("%s %s\n", ar, br);

	char *cr = new char[strlen(ar) + strlen(br) + 1]; // 끝에 0넣을 여유분 1자리 확보
	memset(cr, 0, strlen(ar) + strlen(br) + 1);
	strcat(cr, ar);
	printf("%s\n", cr); //%s는 포인터를 사용할때 주소를 출력해줘야 내용이 나옴
	strcat(cr, br);
	printf("%s\n", cr);
}

void main()
{
	srand((unsigned)time(NULL));

	func73();

}