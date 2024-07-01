#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int kazu, i, r;

		srand(time(0));

		kazu = rand() % 300 + 1;

		for (i = 0; i < 100; i++)
		{
			r = rand() % 300 + 1;
			printf("%03d ", r);
		}
}