#include <stdio.h>
int N;
int a[100];
int main(void)
{
	int i;
	int sum = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for (i = N - 1; i >= 1; i--)
	{
		while (a[i] <= a[i - 1])
		{
			sum++;
			a[i - 1]--;
		}
	}
	printf("%d\n", sum);
}