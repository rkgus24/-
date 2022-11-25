#include <stdio.h>
#include <stdlib.h>
const int MAX = 5000;
int n, k;

typedef struct Node {
   int data;
   struct Node* next;
}Node;

Node* insert(Node* head, int data){
   Node* node = (Node*)malloc(sizeof(Node));
   node->data = data;
   if (head == NULL){
      head = node;
      node->next = node;
   }
   else{
      node->next = head->next;
      head->next = node;
      head = node;
   }
   return head;
}

Node* delete(Node* head, int k){
   Node* tail = head;
   Node* removed = head->next;
   for(int i=1; i<k; i++){
      removed = removed->next;
      tail = tail->next;
   }
   printf("%d", removed->data);
   tail->next = removed->next;
   return removed;
}

int main() {
   Node *head;
   scanf("%d %d", &n, &k);
   for(int i=1; i<=n; i++) {
      head = insert(head, i);
   }
   printf("<");
   for(int i=1; i<=n; i++) {
      head = delete(head, k);
      if(i!=n) printf(", ");
   }
   printf(">");
   return 0;
}