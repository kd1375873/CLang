#include <stdio.h>
mian()
{
	int, su, sum, num;

	sum = su = 0;//�E������n�܂�̂�su��sum��0

	printf("���������");
	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		su++;
		printf("����:");
	}
	printf("���v=%d ����=%.2f\n", sum, (float)sum / su);
}