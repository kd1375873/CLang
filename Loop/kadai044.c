#include <stdio.h>
main()
{
	int i, su;

	printf("整数を入力(-999で入力終了)？");
	scanf("%d", &su);

	i = 0;
	while (su != -999)
	{
		printf("８進数=%o\t１６進数 = % x\n", su, su);
		printf("整数を入力(-999で入力終了)？");
		scanf("%d", &su);
	}
}