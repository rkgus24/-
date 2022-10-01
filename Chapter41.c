//상향식

#include <stdio.h>
#include <stdlib.h>

int n;
int cnt=1;

void f(int k){
    if(k == n) return;
    f(k+1);
    printf("%d ", cnt);
    cnt++;
}
int main()
{
    scanf("%d", &n);
    f(0);

    return 0;
}
