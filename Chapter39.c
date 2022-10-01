//상향식

#include <stdio.h>
int a;
void f(int b) {
    if (b == a) return;
    f(b + 1);
    printf("*");
}
int main() {
    scanf("%d", &a);
    f(0);
    return 0;
}
