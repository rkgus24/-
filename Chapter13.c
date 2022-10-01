#include <stdio.h>
int main(void) {
  char s[10];
	char c;
  int i=0, p=-1 ;
	scanf("%s", s); // 1. 문자열을 문자 배열에 입력 받기
	getchar();
	scanf("%c", &c); //2. 찾는 문자를 문자변수에 입력받기
	while(s[i] != '\0'); {//3. 문자배열을 0번째 요소부터 탐색 
	     //3.찾는 문자와 일치하면, 몇번째인지 저장
		if(s[i] == c) {
			p = i;
			break;
		}
		i++;
	}
	//4. 결과 출력
  if(p != -1) printf("%d번째\n", p+1);
	else printf("not found\n");
  
  return 0;
}
