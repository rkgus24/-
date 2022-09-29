#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 20

typedef char element;
typedef struct {
	element  data[STACK_SIZE];
	int top;
}Stack;

void initStack( Stack *s );
int isFull( Stack *s );
int isEmpty( Stack *s );
void push( Stack *s, element data );
element pop( Stack *s );

int main(){
	int i;
 	Stack s;
	char str[20];
	initStack(&s);
	printf("문자열 입력 : ");
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++) {
		push(&s, str[i]);
	}
	
	for (i = 0; str[i] != '\0'; i++) {
		printf("%c", pop(&s));
	}
	printf("\n");
}

void initStack(Stack *s ){
	 s->top = -1;
}
int isFull(Stack *s ){
	 return s->top == STACK_SIZE -1;
}
int isEmpty(Stack *s ){
 return s->top == -1;
}
void push(Stack *s, element c ){
	 if (isFull(s)) {
		 printf("Stack is Full\n");
		 exit(0);
	 }
	s->top++;
	s->data[s->top] = c;
}
element pop(Stack *s ){
	element temp;
	 if(isEmpty(s)) {
		 printf("stack is Empty\n");
		 exit(0);
	 }
	temp = s->data[s->top];
	s->top--;
	return temp;
}