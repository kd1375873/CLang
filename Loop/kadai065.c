#include <stdio.h>
main()
{
	int num, sum, i;
	i = 0;
	sum = 0;
	printf("����(-999�ŏI��)?");
	scanf("%d",&num);
	do
	{
		sum += num;
		i++;
		printf("����(-999�ŏI��)?");
		scanf("%d",&num);
	} while (num != -999);
	printf("���v=%d\n����=%.6f\n", sum, (float)sum / i);
}