#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int cnt=0, su,i;
	srand(time(0));

	i = rand() % 1000 + 1;
	
	printf("1〜1000の中で当たりの数を予想してください\n");
	do
	{
		printf("当たりの数は？->");
		scanf("%d", &su);
		if (i > su)
		{
			printf("当たりの数より小さいです\n");
		}
		if (i < su)
		{
			printf("当たりの数より大きいです\n");
		}
		cnt++;
	}
	while (i != su);
		printf("正解！%d回目で当たりました\n", cnt);
}