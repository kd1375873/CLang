#include <stdio.h>
main()
{
	int i,s, d[] = { 10,5,30,77,16,3.47,37,33 };

	printf("探索値は？");
	scanf("%d", &s);

	for (i = 0; i < 10; i++)
	{
		if (s == d[i])
		{
			break;
		}
	}

	if (i >= 10)
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("d[%d]にあった\n", i);
	}




}