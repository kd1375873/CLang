#include <stdio.h>
main()
{
	int i, num, sun;

	printf("����(-999�ŏI��)?");
	scanf("%d", &num);

	for (sun = 0, i = 0; num != -999; i++)
	{
		if (num < 0)
		{
			printf("����(-999�ŏI��)?");
			scanf("%d", &num);
			i--;
			continue;
		}
		sun += num;
		printf("����(-999�ŏI��)?");
		scanf("%d", &num);
	}
	printf("���v=%d\n ����=%.2f\n", sun, (float)sun / i);
}