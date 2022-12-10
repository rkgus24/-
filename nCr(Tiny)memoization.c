// 메모이제이션
#include <stdio.h>

int a, b;
int str[26][26];

int f(int n, int r)
{
   if (n < r)
      str[n][r] = 0;
   else if (n == r)
      str[n][r] = 1;
   else if (r == 1)
      str[n][r] = n;
   if (!str[n][r])
      str[n][r] = f(n - 1, r - 1) + f(n - 1, r);
   return str[n][r];
}

int main()
{
   scanf("%d %d", &a, &b);
   printf("%d", f(a, b));
   return 0;
}
