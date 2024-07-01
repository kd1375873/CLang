#include <stdio.h>
main()
{
	int i, num, sun;

	printf("整数(-999で終了)?");
	scanf("%d", &num);

	for (sun = 0, i = 0; num != -999; i++)
	{
		if (num < 0)
		{
			printf("整数(-999で終了)?");
			scanf("%d", &num);
			i--;
			continue;
		}
		sun += num;
		printf("整数(-999で終了)?");
		scanf("%d", &num);
	}
	printf("合計=%d\n 平均=%.2f\n", sun, (float)sun / i);
}