#include <stdio.h>
main()
{
	int gukei, i;

	i = 1;
	gukei = 0;
	while (gukei <= 300)
	{
		gukei += i;
		printf("%d+", i);
		i++;
		
	}
	printf("\b=%d\n", gukei);
}