#include <stdio.h>
mian()
{
	int, su, sum, num;

	sum = su = 0;//‰E‘¤‚©‚çn‚Ü‚é‚Ì‚Åsu‚àsum‚à0

	printf("®”‚ğ“ü—Í");
	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		su++;
		printf("®”:");
	}
	printf("‡Œv=%d •½‹Ï=%.2f\n", sum, (float)sum / su);
}