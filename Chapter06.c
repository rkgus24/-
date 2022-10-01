#include <stdio.h>
int main()
{
	int arry[9];
	int a, i;
	int sum = 0;

	for (i = 0; i < 9; i++) {
		scanf("%d", &arry[i]);
		if (sum < arry[i]) {
			sum = arry[i];
			a = i;
		}
	}
	printf("%d\n", sum);
	printf("%d", (a + 1));

	return 0;
}
