#include <stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","fryday","saturday" };
	int i, j;

	for (i = 0; i <= 6; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (day[i][0]!='s')
				break;
			printf("%c", day[i][j]);
		}
		if (day[i][0]!= 's')
			continue;
		printf("\n");
	}

}