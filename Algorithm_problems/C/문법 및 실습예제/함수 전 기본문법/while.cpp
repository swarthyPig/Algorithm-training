#include "stdafx.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS


void main()
{
	int count = 0; // 약자로 ct를 사용한다.

	while (count < 10) { //무한루프
		count++;
		printf("호랑이 ");
	}
	printf("코끼리");

				   // 이런 코드는 작성하지 않는다. 반복횟수를 알때 : for 모를때 : while
				   /*while (count < 10) { //무한루프
				   count++;
				   printf("호랑이 ");
				   }
				   printf("코끼리");
				   */

				   /*while (true) {
				   if (count == 5) {
				   printf("프로그램이 종료됩니다.");
				   break; // 탈출
				   }
				   printf("%d", count);
				   count++;
				   }*/
				   /*
				   while (1) {
				   printf("호랑이");
				   printf("호랑이");
				   printf("호랑이");
				   break;
				   printf("호랑이");
				   printf("호랑이");
				   break;
				   printf("호랑이");
				   }
				   */
	int num = 0;
	scanf("%d", &num);
	while (1) {
		printf("%d\n", num);
		if (num == 1) {
			printf("우박수를 모두 출력 하였습니다.");
			printf("호랑이");
			break;
		}
		if (num % 2 == 0) {
			num /= 2;
		}
		else {
			num = 3 * num + 1;
		}
	}

}