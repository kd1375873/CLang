#include <stdio.h>
main()
{
	int i, gukei;
		i = 1;
		gukei = i;
		do
		{
			gukei += i;
			printf("%d+", i);
				i++;
		} while (i <= 25);
		printf("\b=%d", gukei);
}