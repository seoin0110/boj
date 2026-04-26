#include <stdio.h>

long N;
long sum=0;
int main(void)
{
	long i;
	scanf("%ld", &N);

	for (i = 0; i < N; i++)
		sum = sum + i;
	printf("%ld\n", sum);
	return 0;
		
}