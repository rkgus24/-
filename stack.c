#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 20
typedef char element;
// 스택 : 자료를 순차적으로 저장하는 선형 구조 (후입선출, LIFO구조)
typedef struct { // 스택 구조체 정의
    int top;
    element data[STACK_SIZE];
} Stack;

int checkTest(char expr[]);
void initStack( Stack *s );
int isFull( Stack *s );
int isEmpty( Stack *s );
void push( Stack *s, element data );
element pop( Stack *s );

int main(){
	int i;
	Stack s;
	char expr[20];
	
	printf("괄호포함 수식 입력 : ");
	scanf("%s", expr);
	if (checkTest(expr)) printf("성공");
	else printf("실패");
	return 0;
}
void initStack( Stack *s ){
	s->top = -1; //초기화코드
}
int isFull( Stack *s ){
	return (s->top == STACK_SIZE -1); //코드작성
}
int isEmpty( Stack *s ){
	return s->top == -1; //코드작성
}
void push( Stack *s, element c ){
	if(isFull(s) /*스택이 가득 찼으면*/){
		printf("stack is full\n");
    return ;
	}
  s->top++;
	s->data[s->top] = c; //push 코드작성
}
element pop( Stack *s ){
    element temp;
	if(isEmpty(s) /*스택이 비었으면*/){
		printf("stack is empty\n");
		return 0 ;
	}
    temp = s->data[s->top];
    s->top--;
	return temp; //pop 코드작성
}
int checkTest(char expr[]){
	int i;
	Stack s;
	initStack(&s);
	char ch,open_ch;
  for(i=0;expr[i]!='\0';i++){
		ch = expr[i]; //코드작성
		switch(ch){
			case '(': case '[': case '{':
            push(&s, ch);
			//코드작성
				break;
			case ')': case ']': case '}':	

				if (isEmpty(&s) /*스택이 비었으면*/) return 0;
				open_ch = pop(&s); //코드작성

				if ((open_ch == '(' && ch != ')') ||
					  (open_ch == '[' && ch != ']') ||
						
						
					  (open_ch == '{' && ch != '}') ) {
					return 0;
				}
				// printf("open_ch=%c\n",open_ch);
				break;
		}
	}
	if (!isEmpty(&s) /*스택이 비지 않았으면*/) return 0;
    //! or isEmpty == 0
	return 1;
}
