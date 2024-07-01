#include <stdio.h>
main()
{
	int i;
	i = 1;
	while (i<=20)
	{
		if (i == 11)
		{
			printf("\n");
		}
		printf("%2d ", i);
		i++;
	}
}