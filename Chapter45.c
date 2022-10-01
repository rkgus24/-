#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int n;
char str[30];
int f(int k){
    
    if(k == n) return 0;
    return f(k+1)+(str[k]-'0');
}

int main()
{
    scanf("%s",str);
    n = strlen(str);
    printf("%d\n",f(0));

    return 0;
}
