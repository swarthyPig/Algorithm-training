#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// ctrl + d 자동 복붙 // ctrl + k + d 전체 코드 정렬 // ctrl + k + f 블록부분만 정렬
// alt + 방향키위아래 : 이동
// 전체주석 : ctrl + k + c <---> ctrl + k + u

//인수를 스택에 집어 넣는 방향에따라
//pascal : 인수를 스택에 저장하는 순서를 왼쪽에서 오른쪽으로 한다.
//cdecl : 인수를 스택에 저장하는 순서를 오른쪽에서 왼쪽으로 한다.
//stdcall : 인수를 스택에 저장하는 순서를 오른쪽에서 왼쪽으로 한다.

//스택에 인수를 pop하는 주체에 따라
//pascal : 호출을 당하는 쪽이 스택공간을 삭제한다.
//stdcall : 호출을 당하는 쪽이 스택공간을 삭제한다.
//cdecl : 호출을 하는 쪽이 스택공간을 삭제한다.

void _cdecl func75() { // 디폴트 : _cdecl
	char ar[] = "1234"; // 숫자만 사용
	int num = atoi(ar);// 아스키(문자열) to int(정수)
	printf("%d\n", num);

	itoa(2018, ar, 10); // 정수를 문자열로, (변환할 정수, 문자열을 담은 변수, 변환할 진수)
	printf("%s\n", ar);
}

void main()
{
	srand((unsigned)time(NULL));

	func75();

}