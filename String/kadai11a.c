#include <stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","fryday","saturday" };
	int i, j;


	for (i = 0; i <= 6; i++)
	{
		for (j = 0; j <9; j++)
		{
			if (j == 3)
			{
				day[i][4] = '\0';
				break;
			}
			printf("%c", day[i][j]);
		}
		printf("\n");
	}

}