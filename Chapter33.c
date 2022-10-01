#include<stdio.h> 
int main(){
	int a[101][101]={0};
	int i,j,num,n,m;
	scanf("%d",&n); // n행 n열
	num = 1;
	//1. 배열에 값을 저장하는 코드 작성
	for (i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			for (j = 1; j <= n; j++) {
			a[i][j] = num++;
			}
		}
		else {
			for (j = n; j >= 1; j--) {
				a[i][j] = num++;
			}
		}
	}
	
	//2. 배열결과를 출력하는 코드 작성
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
	}
