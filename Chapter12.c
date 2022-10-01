#include <stdio.h>
#include <string.h>
int main() {
	char alpha[6] = { 'H', 'E', 'L', 'L', 'O', '!' };
char c;
int i;
printf("찾고 싶은 문자 : ");
scanf("%c", &c); //L
for (i = 0; i < 6; i++) {
	if (alpha[i] == c) {
		printf("%d번째 ", i+1);
		break;
	}
}
return 0;
}

	// char a[15] = "0123456789";
	// char str[80];
	//scanf("%s", str); //fgets로 나타낼 수도 있음
	// fgets(str, 80, stdin); //80 -> sizeof(str)
	// printf("길이 : &d", strlen(str)-1);
	// for(int i = 0; i < strlen(a); i++) {
	// 	int temp = a[i] - 48;
	// 	printf("%d ", temp);
	// }//암기
// 	return 0;
// }
