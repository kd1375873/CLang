#include <stdio.h>
main()
{
	int num, sum, i;
	i = 0;
	sum = 0;
	printf("®”(-999‚ÅI—¹)?");
	scanf("%d",&num);
	do
	{
		sum += num;
		i++;
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d",&num);
	} while (num != -999);
	printf("‡Œv=%d\n•½‹Ï=%.6f\n", sum, (float)sum / i);
}