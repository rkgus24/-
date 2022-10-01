#include<stdio.h>
#include<string.h>
#define NUM 3

//전역에 구조체 정의
typedef struct person {
	char name[10];
	int age;
}PERSON; //실제로 정의되는 부분

void inputData( PERSON *p );
void outputData( PERSON *p );

int main(){
		int i;
		PERSON p[3];
		for (i = 0; i < 3; i++) {
			inputData(&p[i]); // p + i
		}
	
		for (i = 0; i < 3; i++) {
			outputData(&p[i]); // p + i
		}
	
		return 0;
}
void inputData( PERSON *p ){
		scanf("%s", p->name);
		scanf("%d", &p->age);
}
void outputData( PERSON *p ){
	printf("%s, %d\n", p->name, p->age);
} 
