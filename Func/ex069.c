#include <stdio.h>
mian()
{
	int, su, sum, num;

	sum = su = 0;//右側から始まるのでsuもsumも0

	printf("整数を入力");
	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		su++;
		printf("整数:");
	}
	printf("合計=%d 平均=%.2f\n", sum, (float)sum / su);
}