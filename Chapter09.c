#include <stdio.h>

int f(int a)

{

    if(a==1) return 1;

    else return a*f(a-1);

}

int main()

{

    int a=5;

    printf("%d",f(a));

    return 0;

} //120
