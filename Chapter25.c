//0901

#include <stdio.h>
int main() {
	char* pc = "mango";
	char pc2[100];
	pc = "banana";
	printf("%s\n", pc);
	printf("%d\n", sizeof(pc)); // 8byte
	for (int i = 0; i < 6; i++) {
		printf("%c", pc[i]);
	}
	//pc[1] = 't'; // 문자열 상수이므로 변경 X
	strcpy(pc2, pc);
	
	
	return 0;
}