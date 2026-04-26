#include <stdio.h>
int h[30000];
int main(void) {
	int n;
	int max = 0;
	int temp = 0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
		scanf("%d", &h[i]);
	for (int i = 0;i < n-1;i++)
	{

		for (int j = i+1;j < n;j++)
		{
			if (h[i] > h[j])
				temp++;
			else
				break;
		}
		if (temp >= max) {
			max = temp;
		}
		temp = 0;
	}
	printf("%d", max);
	return 0;
	
}