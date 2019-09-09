#include "stdafx.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS


void main()
{
	printf("%d\n", 3 || 0); // 1 or 0 = 1
	printf("%d\n", 3 > 2 || 5 == 5); // 1 or 1 = 1

	int a = 3, b = 4;

	printf("%d\n", a < 10 || b != 4); // 1 or 0 = 1
	printf("%d\n", a > 10 || b != 4); // 0 or 0 = 0
	printf("%d\n", (a > 10 || b != 4) || a == 12); // (0 or 0) or 0 = 0
	printf("%d\n", false || true || false); // 0 or 1 or 0 = 1
	printf("%d\n", 3 + 1 > 2 || 4 - 2 == 0); // 1 or 0 = 1   산술 -> 대소 -> 논리

	printf("%d\n", true && true && false); // 1 and 1 and 0 = 0

	int c = 192; // 키 
	printf("%d\n", c >= 180 && c < 200); // 1 and 1 = 1

	int d = 73; // 나이
	int e = 5000; // 재산
	printf("%d\n", (d <= 10 || d >= 70) && e < 3000); // (0 or 1) and 0 = 0
	printf("%d\n", d <= 10 || (d >= 70 && e < 3000)); // 0 or (0 and 0) = 0

	printf("%d\n", !(true)); // 0
	printf("%d\n", !(3 > 2)); // 0
}