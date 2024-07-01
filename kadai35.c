#include <stdio.h>
main()
{
	int su;
	printf("整数？");
	scanf("%d", &su);

	if (su > 0)
	{
		printf("プラスです\n");
	}

		if (su < 0)
		{
			printf("マイナスです\n");

		}
	if(su==0)
	{
		printf("0です\n");
	}
}