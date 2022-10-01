 #include <stdio.h>
  char star[20];
  void f(int n) { // 재귀함수 종료조건 1. return을 만났을 때
		if (n == 0) return; // 2. 함수의 마지막 중괄호를 만났을 때
  	f(n-1); // 2라인
		//for (int i = 1; i <= n; i++)
		//{
		//	printf("*");
		//}
		star[n] = '*';
		printf("%s\n", star + 1); 
	} 

 int main() {
    int n;
    scanf("%d", &n); // 5
    f(n); // f(5)
 }
//중간고사
