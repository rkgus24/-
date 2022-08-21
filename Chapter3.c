#include <stdio.h>
int n, arr[10000001] ={};
int m, t;
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		arr[t] = 1;
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &t);
		printf("%d ", arr[t]);
	}
	
	return 0;
}
