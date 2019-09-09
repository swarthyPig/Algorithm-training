

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

	int n = 10;
	//int ar[n]; // 배열은 메모리를 요구할때 변수를 이용할수없다.
	int input = 0;
	scanf("%d", &input);

	// 앞과 뒤의 숫자를 더하려고하면 배열이 필요하다
	// 필요한 배열의 크기는 입력 값으로 들어온다
	// 입력된 값은 input이라고하는 변수가 가지고 있다
	// input만큼 배열이 필요한데 배열은 변수를 이용하여 메모리를 요구할 수 없다
	// 이것이 포인터를 사용하는 이유(공유, 할당)

	short ar[input]; // 배열은 메모리를 요구할때 변수를 이용할수없다.
	for (int a = 0; a < input; a++) {
		printf("%d ", rand() % 10);
		ar[a] = rand() % 10;
	}

	for (int a = 0; a < input / 2; a++) {
		printf("%d", ar[a] + ar[(input - 1) - a]);
	}
}

-------------------------------------------------------------------------------------------------------------------------------------

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

	int a = 10; // - 고정(정적) 메모리
				// - 동적 메모리 : 실행하고 싶을때 메모리 주세요	
	int *b; //- 포인터변수;

			/*           내용(value) 주소(address)

			a(일반)         a          &a

			*b(포인터)     *b           b

			- 주소에대한 문법 = 주소에 대한 문법 사용
			- 내용에대한 문법 = 내용에 대한 문법 사용

			a = *b; (o) // 내용 = 내용
			a =  b; (x) // 내용 = 주소
			&a = *b; (x) // 주소 = 내용
			&a =  b; (x) // 주소 = 주소 이지만 일반 변수는 주소를 받을 수 없다!!!
			*b =  a; (o) // 내용 = 내용
			*b = &a; (x) // 내용 = 주소
			b =  a; (x) // 주소 = 내용
			b = &a; (o) // 주소 = 주소 

			- 일반 변수는 주소를 받을 수 없다.
			- 포인터는 주소 받기 전에는 사용불가.
			- 포인터 사용 목적 : 공유, 할당.
			- 포인터는 가장 최근에 받았던 주소만 기억.
			- 공유 why? 함수에서 사용하려고
			- 배열은 일반 변수이다 앞에 &를 붙여줘야 주소변수가 됨
			- 토끼[거북이] == *(토끼 + 거북이) // a[b] == *(a + b)
			- 메모리를 할당 받았으면 무조건 해제를 해줘야된다 
			- 대입 연산자는 쌍방간의 타입이같아야 한다. 타입을 맞추기 위해서 타입캐스팅을 사용하게되는데()는 값을 캐스팅
			하는 것이고 ( *)은 주소를 캐스팅 하는 것이다.*/
}

----------------------------------------------------------------------------------------------------------------------------------------------------

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

	int a = 10;
	int *b;

	// a = *b; 내용 = 내용   이지만 이 문법은 포인터가 주소를 잡기전이므로 못씀!!
	b = &a; // 주소 = 주소   b가 주소를 받았다, a라고하는 메모리를 b가 공유하는 것

	printf("%d %d\n", a, *b); // 10, 10 a는 원래 10이고 b가 메모리를 공유하였으므로 값은 같다

	*b = 20; // 서로 공유하므로 b의값이 바뀌면 a의값도 바뀐다
	printf("%d\n", a);

	a = 5; // 서로 공유하므로 a의 값이 바뀌면 b의 값도 바뀐다
	printf("%d\n", *b);

	int c = 100;
	b = &c; // b가 c의 주소를 받았다 c라고 하는 메모리를 b가 공유하는 것

	a = 123; // 포인터는 최근 주소만 기억, b가 c의 주소를 받았으므로 a의 공유는 해제

	printf("%d\n", *b); // a = 123, *b = 100, c = 100; 

	// &a = b; //일반변수는 주소를 받을 수 없다.

	int *ptr;
	// *ptr = 100; // 포인터는 주소받기전 사용 불가

	ptr = b; //b의 주소값을 ptr이 공유받았다. c, *ptr, *b 모두 동일한 메모리를 쓰고있다.

	*ptr = -30; // 공유받은 후이므로 사용가능
	printf("%d %d %d\n", *b, *ptr, c);


	int ar[10];
	for (int a = 0; a < 10; a++) { // 배열 입력. 1 11 21 31 41 51 61 71 81 91 
		ar[a] = a * 10 + 1;
	}
	for (int a = 0; a < 10; a++) { // 배열 출력
		printf("%d ", ar[a]);
	}printf("\n");

	int *apple;
	apple = &ar[0]; // ar[0] == 1, 포인터변수가 주소를 공유받았다.
	printf("%d ", *apple); // 내용출력. ar[0] 값인 1이 출력
	printf("%d ", *(apple + 3));//배열이 가지고 있는 3번 인덱스 apple[3] == *(apple + 3) 31이출력
	printf("%d\n", *(apple + 0));//배열이 가지고 있는 0번 인덱스 *apple == *(apple + 0) 1이 출력
	*(apple + 9) = 999; // apple[9] == 999  배열의 9번째 인덱스 값을 999로 변경

	for (int a = 0; a < 10; a++) { // 배열 ar 출력
		printf("%d ", ar[a]);
	}printf("\n");

	for (int a = 0; a < 10; a++) { // 배열 ar 출력
		printf("%d ", *(apple + a));
	}printf("\n");

	for (int a = 0; a < 10; a++) {
		printf("%d ", *(ar + a)); // ar[a] == *(ar + a)
	}printf("\n");

	for (int a = 0; a < 10; a++) {// *(apple + a ) == apple[a]
		printf("%d ", apple[a]);
	}printf("\n");

	/*for (int a = 0; a < 10; a++) {
	printf("%d ", *apple[a]); *apple[a] = 잘못된 코드
	}printf("\n");*/

	*apple = 10; // 모두 같은 코드
	apple[0] = 20; // 모두 같은 코드
	ar[0] = 30; // 모두 같은 코드
	*(ar + 0) = 40; // 모두 같은 코드
	*(ar) = 50; // 모두 같은 코드
	*ar = 60; // 모두 같은 코드

	int k = 99;
	apple = &k; // 주소 == 주소
	//ar = &k; 배열인 ar은 일반변수이기 때문에 주소를 받을 수 없다.

	apple = &ar[5];
	*(apple - 1) = 77; // 배열 4에 값이 바뀜

	for (int a = 0; a < 10; a++) {
		printf("%d ", ar[a]);
	}printf("\n");

	/*int d = 80;
	int *pp; // 포인터변수 선언
	pp = &d; // 주소받음 
	*/

	int d = 80;
	int *pp = &d; // 컴파일이 되면서 두줄코드로 나뉜다, 선언과 동시에 주소를 받음
}

-------------------------------------------------------------------------------------------------------------------------------

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

	int *ptr; // 포인터 변수 선언
	int num = 0; // 입력받을 변수 선언후 초기화
	scanf("%d", &num); 
	ptr = new int[num]; // 포인터에서는 배열 할당 받을때 변수사용가능

	for (int a = 0; a < num; a++) { // 배열 입력
		*(ptr + a) = a * 10 + 1; // ptr[a] == *(ptr + a)
	}

	for (int a = 0; a < num; a++) { // 배열 출력
		printf("%d ", ptr[a]); // 출력할때는 주소를 출력 ptr[a] == *(ptr + a)
	}printf("\n");

	delete []ptr; // 메모리 반환
}