#include <stdio.h>
int n;
int t[1000];
char r[1000][20];
int main()
{	
	int i,j;
	int a = 0;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf("%d %s", &t[i], r[i]);
		a = 0;
		while (r[i][a] != '\0') {
			for (j = 0;j < t[i];j++) {
				printf("%c", r[i][a]);
			}
			a++;
		}
		printf("\n");
	}



	return 0;
}