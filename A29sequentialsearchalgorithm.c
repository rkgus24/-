#include <stdio.h>
int i, count, n, result, num, height, j, ki;
int arr[65];

int search() {
	for (i=0; i<num; i++) {
		count++;
		if(arr[i]==ki) return count;
	}
	return -1;
}

int main() {
	scanf("%d", &num);
	for (i=0; i<num; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &ki);
	result = search();
	if(result==-1) printf("실패");
	else printf("%d", count);
	return 0;
}
