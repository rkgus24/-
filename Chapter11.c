#include <stdio.h>

void hanoi(int n,char a, char b, char c)

{

    if(n==1)

    {

        printf("%d : %c -> %c\n",n,a,c);

    }

    else

    {

        hanoi(n-1,a,c,b);

        printf("%d : %c -> %c\n",n,a,c);

        hanoi(n-1,b,a,c);

    }

}

int main()

{

    int n=3;

    hanoi(n,'A','B','C');

    return 0;

} 
//1 : A ->  C
//2 : A -> B
//1 : C -> B
//3 : A -> C
//1 : B -> A
//2 : B -> C
//1 : A -> C
