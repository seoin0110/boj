#include <stdio.h>
int N, X, n[10000];
int main(void)
{
	int j;
	scanf("%d %d", &N,&X);
	for (j = 0; j < N; j++) {
		scanf("%d", &n[j]);
		if (n[j] < X)
			printf("%d ", n[j]);
	}

	printf("\n");

	return 0;

}