#include <stdio.h>
main()
{
	int su, i, gukei;

	printf("®”i|‚X‚X‚X‚ÅI—¹jH");
	scanf("%d", &su);

	i = 0;
	gukei = 0;
	while (su != -999)
	{
		gukei += su;
		i++;
		printf("®”i|‚X‚X‚X‚ÅI—¹jH");
		scanf("%d", &su);
	}
	printf("‡Œv%d\n", gukei);
	printf("•½‹Ï%.2f\n", (float)gukei / i);


}