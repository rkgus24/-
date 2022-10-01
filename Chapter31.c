// 예제3 2차원 배열 입력 & 출력 코드를 완성하여 실행해 보자.
#include <stdio.h>
void inputArray(int a[][3], int r);
void outputArray(int a[][3], int r);
int main()
{
   int array[4][3];
   int row = 4;
   inputArray(array, row);
   outputArray(array, row);
}
void inputArray(int a[][3], int r)
{
   int i, j;
   //2차원 배열 입력
   for(i=0; i<r; i++){
      for(j=0; j<3; j++){
         scanf("%d", &a[i][j]);
      }
   }
}
void outputArray( int a[][3], int r){
   int i, j;
   //2차원 배열 출력
   for(i=0; i<r; i++){
      for(j=0; j<3; j++){
         printf("%d ", a[i][j]);
      }
      printf("\n");
   }
}
