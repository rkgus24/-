//하향식

#include <stdio.h>
int a;
void f(int b) {
    if (b <= 0) 
        return;
    f(b - 1);
    printf("*");
}
int main() {
    scanf("%d", &a);
    f(a);
}
