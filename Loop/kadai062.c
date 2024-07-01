#include <stdio.h>
main()
{
	int i;

	i = 20;
	do 
	{
		if (i == 10)
		{
			printf("\n");
		}
		printf("%2d ", i);
		i--;
	} while (i >= 1);
}