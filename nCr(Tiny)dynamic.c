#include <stdio.h>
//동적계획법
int main()
{
   int n, r, i, j;
   int str[50][50] = {0};
   scanf("%d %d", &n, &r);
   for (i = 1; i < n+2; i++)
   {
      for (j = 0; j < n+2; j++)
      {
         if (i == j + 1 || i == j)
         {
            str[i][j] = 1;
            break;
         }
         str[i][j] = str[i - 1][j - 1] + str[i - 1][j];
      }
   }
   printf("%d\n", str[n+1][r]);
   return 0;
}