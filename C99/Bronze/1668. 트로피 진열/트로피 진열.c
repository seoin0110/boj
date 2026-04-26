#include <stdio.h>

int main(void) {
	int a[50];
	int n;
	int max = 0;
	int k=1;

	scanf("%d", &n);
	for (int i = 0;i < n;i++)
		scanf("%d", &a[i]);
	max = a[0];
	for (int i = 1;i < n;i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			k++;
		}
	}
	printf("%d\n", k);
	k = 1;
	max = a[n - 1];
	for (int i = n - 2;i >= 0;i--)
	{
		if (a[i] > max)
		{
			max = a[i];
			k++;
		}
	}
	printf("%d\n", k);
}