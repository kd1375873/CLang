#include <stdio.h>
main()
{
	int c[10], num, i,j;
	printf("Ži|XXXĹIšjH");
	scanf("%d", &num);

	for (i = 0; num != -999; i++)
	{
		c[i] = num;
		printf("Ži|XXXĹIšjH");
		scanf("%d", &num);
	}
	printf("zńc=");
	for (j = 0; j <= i-1; j++)
	{
		printf("%.2d ", c[j]);
	}

}