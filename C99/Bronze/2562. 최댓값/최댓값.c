#include <stdio.h>

int main(void) {
	int a[9];
	int index = 0;
	int max = 0;

	for (int i = 0;i < 9;i++)
		scanf("%d", &a[i]);
	for (int i = 0;i < 9;i++)
		if (a[i] > max) {
			max = a[i];
			index = i;
		}
	printf("%d\n%d\n", max, index+1);
}