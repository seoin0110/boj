int main(void) {

	int b[5];
	int min = 0;
	int min2 = 0;
	for (int i = 0; i < 5;i++)
		scanf("%d", &b[i]);
	min = b[0];
	min2 = b[3];
	for (int i = 1;i < 3;i++)
		if (min > b[i])
			min = b[i];
	if (b[4] < min2)
		min2= b[4];
	printf("%d\n", min+min2 - 50);
	
	return 0;
	
}