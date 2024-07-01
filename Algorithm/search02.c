#include <stdio.h>
main()
{
	int i, s, d[11]={ 10,5,30,77,16,3,47,29,37,33,55 };
	printf("探索値を入力");
	scanf("%d", &s);
	i = 0;

	while (s != d[i])//for(d[10]=s,i=0;s!=d[i];i++);
	{
		i++;
	}
		if (i == d[11])
		{
			printf("見つからなかった\n");
		}
	else
	{
		printf("探索値%dを、d[%d]で発見！\n", s, i);
	}
}