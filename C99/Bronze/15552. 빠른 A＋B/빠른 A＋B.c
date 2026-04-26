#include <stdio.h>
int N, A[1000000], B[1000000];
int main(void)
{
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &A[i], &B[i]);
		A[i] = A[i] + B[i];
	}
	for (i = 0; i < N; i++)
		printf("%d\n", A[i]);

	return 0;

}