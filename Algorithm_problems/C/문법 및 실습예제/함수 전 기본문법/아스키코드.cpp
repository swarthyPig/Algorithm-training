#include "stdafx.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS


void main()
{
	char a = 65; // 아스키코드 'A'
	char b = 'A'; // 컴파일이 되면서 char b는 65; 코드로 변경됩니다.
	printf("%d\n%d\n", a, b);
	printf("%c\n%c\n", a, b); // %c는 아스키코드에 관련되는 문자를 출력해준다
	char c = '8';
	printf("%c\n%d\n", c, c);

	for (int a = 0; a < 26; a++) {
		printf("%c %d\n", 'A' + a, 65 + a); // 가독성 때문에 'A'+65 가 더 좋다.
	}

	for (int i = 0; i < 26; i++) { //대문자와 소문자의 아스키코드값의 차이는 항상 32이다.
		printf("%d\n", ('a' + i) - ('A' + i));
	}
}