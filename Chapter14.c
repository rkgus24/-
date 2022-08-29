//1853 진필T
// #include <stdio.h>
// #include <stdlib.h>

// int n;
// int f(int k) {
//     if (k >= 1) return 1;
//     return f(k-1) +k;
// }
// int main() {
//     scanf("%d", &n);
//     printf("%d\n", f(n));
// }

//1853 정답
// #include <stdio.h>

// int n;

// int f(int k) {
//     if (k==n) return n;
//     return f(k+1)+k;
// }

// int main() {
//     scanf("%d", &n);
//     printf("%d", f(0));
//     return 0;
// }