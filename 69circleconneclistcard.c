#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct Node { //0) Node구조체 작성
	element data;
	struct Node* next;
}Node;

void printList(Node* head){
	Node *p=head->next; //1)처음위치부터 출력;
	int cnt = 0;
	if (head == NULL) return;
	do {
		if(p == NULL) break;
		printf("%d->", p->data); //2)데이터 출력
		p=p->next; //////////////////////////3)ptr을 다음 주소로 저장 시험 출제
		cnt++;
	}while(p!=head->next); //while(p!=head->next); //4)조건
    printf("\n");
}
Node* insertFirst(Node* head, element data){
	Node* node=(Node*)malloc(sizeof(Node)); //Node 동적할당 malloc은 void로 돌려주기 때문에 Node*를 앞에 쓰는 것임
	node->data=data;
	if (head == NULL){
		head=node; //head의 주소로 새로운 노드의 주소 저장
		node->next=node; //새로운 노드의 다음 주소로 head->next 저장
	}
	else{
		node->next=head->next; //새로운 노드의 다음 주소로 head 저장	 
		head->next=node; //head의 다음 노드 주소로 새로운 노드의 주소 저장
	}
	return head;
}
Node* insertLast(Node* head, element data){
	Node* node = (Node*)malloc(sizeof(Node)); //노드 동적할당
	node->data =data;
	if (head == NULL){
		head=node; //head의 주소로 새로운노드의 주소 저장
		node->next=node; //새로운노드의 다음 주소로 head 저장
	}
	else{
		node->next=head->next;
		head->next=node;
		head=node;
	}
	return head;
}

Node* changeCard(Node* head) {
	Node* removed = head->next; //1 삭제
	head->next = head->next->next; //2가 첫위치로 감
	
	return head->next;
}

int main() {
	Node *head = NULL, *p;
	int n;
	printf("카드개수 입력\n");
	scanf("%d", &n);
	
	for (int i = 1; i<=n; i++) {
		head=insertLast(head, i);
	}
	while (head->next != head) {
		head = changeCard(head);
		printList(head);
	}
	printf("마지막 카드번호 : %d", head->data);
}