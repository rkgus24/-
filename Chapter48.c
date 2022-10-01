#include <stdio.h>
#include <stdlib.h>
typedef struct {
	char c1;
	int *numPtr; // 포인터
} Data;
int main()
{
	int num1 = 10;
	Data d1; // 구조체 변수
	Data *d2 = (Data*)malloc(sizeof(Data)); // 구조체 포인터에 메모리 할당
	d1.numPtr = &num1;
	d2->numPtr = &num1;
	printf("%d\n", *d1.numPtr); // 10: 구조체의 멤버를 역참조
	printf("%d\n", *d2->numPtr); // 10: 구조체 포인터의 멤버를 역참조

	d2->c1 = 'a';
	printf("%c\n", (*d2).c1); // a : 구조체 포인터를 역참조하여 c1에 접근
	// d2->c1과 같음
	printf("%d\n", *(*d2).numPtr); // 10: 구조체 포인터를 역참조하여 numPtr에 접근한 뒤 다시 역참조
	// *d2->numPtr과 같음

	free(d2);

	return 0;
} //시험 : 변수 섞어놓고 결과 물어보는 것
