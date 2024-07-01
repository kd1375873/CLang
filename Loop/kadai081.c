#include <stdio.h>
main()
{
	int num, sun,i;

	printf("®”(-‚X‚X‚X‚ÅI—¹)?");
	scanf("%d", &num);
	
	sun = 0;
	i = 0;

	while (num != -999)
	{
		if (num == -999)
		{
			break;
		}
		i++;
		sun += num;
		printf("®”(-‚X‚X‚X‚ÅI—¹)?");
		scanf("%d", &num);
	}
	printf("‡Œv=%d\n •½‹Ï=%.2f\n",sun,(float)sun/i);
}