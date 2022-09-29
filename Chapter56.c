#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_STACK_SIZE 100
typedef int element; // int를 element로 재정의
typedef struct {
	element stack[MAX_STACK_SIZE];
	int top;
} Stack;
Stack s;
int top; // 전역변수로 스택 선언

int isEmpty(){
 if (s.top == -1) return 1;
	else return 0;
}
int isFull(){
	if (s.top == MAX_STACK_SIZE -1) return 1;
	else return 0;
}	 
void push(element item){
	if (isFull()) return;
	s.top++;
	s.stack[s.top] = item;
}
element pop(){ // 반환후 제거
	if (isEmpty()) return;
	element temp;
	temp = s.stack[s.top];
	s.top--; 
	// temp = stack[top--]; 로도 쓸 수 있음
	return temp;
}
element peek(){// 반환만
	return s.stack[s.top];
}
int main(){
	s.top = -1; // top = 인덱스
	push(1);
	push(2);
	push(3);
	printf("%d\n",pop());
	printf("%d\n",peek());
	printf("%d\n",pop());
	return 0;

}