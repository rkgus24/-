#include <stdio.h>
#define ROWS 3
#define COLS 3
//행렬전치함수 
void matrixTrans(int a[ROWS][COLS],int b[ROWS][COLS]){
	for(int r=0;r<ROWS;r++){
		for(int c=0;c<COLS;c++){
			b[c][r]=a[r][c];
		}
	}	
}
void matrixPrint(int a[ROWS][COLS]){
	int i,j;
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLS;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int array1[ROWS][COLS] ={{2,3,0},{8,9,1},{7,0,5}};
	int array2[ROWS][COLS];
	matrixTrans(array1,array2);
	matrixPrint(array1);
	matrixPrint(array2);
	return 0;
}
