// 예제1 ==> 이 결과가 의미하는 것은? 행우선인가? 열우선인가?
#include<stdio.h>
int main(){
    int i,j, a[2][3]={{10,20,30},{40,50,60}}; //24
    printf("배열전체의 크기 : %d\n",sizeof(a)); //24
    printf("배열요소의 개수 : %d\n",sizeof(a)/sizeof(int)); // 24 / 4 = 6
	//printf("%d\n", i의 값\n);
		//printf("%d\n", &a[1][0]-&a[0][0]); // 3 (a+4) 주소
    //printf("배열요소의 값\n"); 
   //배열의 값과 주소 출력
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
    return 0; 
}
//시험ㄴ
