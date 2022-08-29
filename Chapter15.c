//1854
#include <stdio.h>
#include <stdlib.h>

long long int n;

int f(long long int n) {
    if (n == 0) return 0;
    return (n%10) + f(n/10);
}

int main() {
    scanf("%lld", &n);
    printf("%d\n", f(n));
    return 0;
}

// #include <stdio.h>

// char str[30];
// int f(int k) {
//     if (k < 0) return 0;
//     return f(k-1) + (str[k] -'0');
// }
// int main() {
//     int n;
//     scanf("%s", str);
//     n = strlen(str);
//     printf("%d\n", f(n-1));
//     return 0;
// }