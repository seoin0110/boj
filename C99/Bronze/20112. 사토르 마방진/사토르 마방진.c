#include <stdio.h>

int main(void)
{
	int n;
	char c[100][100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", c[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (c[i][j] != c[j][i])
			{
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");
	return 0;

}