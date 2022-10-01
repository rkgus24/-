//하향식

#include <stdio.h>
int m;
void f(int k) {
	if (k <= 0)
		return;
	f(k - 1);
	printf("%d ", k);
}
int main() {
	scanf("%d", &m);
	f(m);
	return 0;
}
