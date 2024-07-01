#include <stdio.h>
main()
{
	int c[10], num, i,j;
	printf("®”i|‚X‚X‚X‚ÅI—¹jH");
	scanf("%d", &num);

	for (i = 0; num != -999; i++)
	{
		c[i] = num;
		printf("®”i|‚X‚X‚X‚ÅI—¹jH");
		scanf("%d", &num);
	}
	printf("”z—ñc=");
	for (j = 0; j <= i-1; j++)
	{
		printf("%.2d ", c[j]);
	}

}