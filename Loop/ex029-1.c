#include <stdio.h>
main()
{
	int num;
	printf("数字を入力");
	scanf("%d", &num);

	while (num >0) {
		printf("*");
		num--;
	}
}