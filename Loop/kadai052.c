#include <stdio.h>
main()
{
	int cnt, i,j;//iはセット数ｊは数を数える

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 20; j++)
		{
			cnt++;
			printf("%2d", cnt);
		}
		printf("\n");
			}
	}
}