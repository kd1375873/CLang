#include <stdio.h>
main()
{
	int i, j;

	i = 20;
	while (i >= 1)
	{
		if (i==10)
		{
			printf("\n");
		}
		printf("%2d ", i);
		i--;
	}
}