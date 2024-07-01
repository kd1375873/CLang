#include <stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","fryday","saturday" };
	int i,j;

		for (j = 0; j <= 6; j++)
		{
			puts(day[j]);
			printf("\n");
		}
}