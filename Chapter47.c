#include<stdio.h>
#include<string.h>
typedef struct Person{
    char name[10];
    int age;
}PERSON;

int main(){
    PERSON* p = malloc(sizeof(PERSON));
    scanf("%s", p->name );
    scanf("%d", &p->age );
    printf("%s, %d\n", p->name, p->age);
    free(p);
    return 0;
}
