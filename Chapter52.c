#include <stdio.h>
#include <stdlib.h>
#define MAX_TERMS 100

typedef struct {
   int row;
   int col;
   int value;
} element;

typedef struct {
   element data[MAX_TERMS];
   int rows;
   int cols;
   int terms;
} Smatrix;

Smatrix matrixTrans2(Smatrix a)
{
   int bindex = 0;
   Smatrix b;
   b.rows = a.rows;
   b.cols = a.cols;
   b.terms = a.terms;
   for(int j=0; j<a.cols; j++) {
      for(int i=0; i<a.terms; i++) {
         if(a.data[i].col == j) {
            b.data[bindex].row = a.data[i].col;
            b.data[bindex].col = a.data[i].row;
            b.data[bindex].value = a.data[i].value;
            bindex++;
         }
      }
   }
   return b;
}
void matrixPrint(Smatrix a)
{
   for(int i=0; i<a.terms; i++) {
      printf("(%d, %d, %d) \n", a.data[i].row, a.data[i].col, a.data[i].value);
   }
   printf("---------------------\n");
}
int main()
{
   Smatrix m;
   scanf("%d %d %d", &m.terms, &m.rows, &m.cols);
   for(int i=0; i<m.terms; i++) {
      scanf("%d %d %d", &m.data[i].row, &m.data[i].col, &m.data[i].value);
   }
   matrixPrint(m);
   Smatrix r;
   r = matrixTrans2(m);
   matrixPrint(r);
   return 0;
}
