#include<stdio.h>
main()
{
	int num, i;

	printf("数字を入力");
	scanf("%d", &num);
	i= 0;

	while (i < 11)
	{
		printf(" % d + % d=%d\n", num, i, num + i);
			i++;
	}
}




