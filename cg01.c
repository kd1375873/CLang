#include <stdio.h>
main()
{
	int a;
	printf("整数を入力\n");
	scanf("%d", &a);

	if (a >= 0)
	{
		printf("入力値は自然数です。\n");
	}
	else {
		printf("入力値はマイナスです。\n");

	}
}
