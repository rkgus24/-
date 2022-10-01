//상향식

#include <stdio.h>

int n;

int f(int k) {
    if (k==n) return n;
    return f(k+1)+k;
}

int main() {
    scanf("%d", &n);
    printf("%d", f(0));
    return 0;
}
