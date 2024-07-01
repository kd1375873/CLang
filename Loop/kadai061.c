#include <stdio.h>
main()
{
	int i;
	i = 1;
	do
	{
		if (i == 11)
		{
			printf("\n");
		}
		printf("%2d ", i);
		i++;
	} while (i <= 20);
}