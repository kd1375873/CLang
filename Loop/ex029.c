#include <stdio.h>
main()
{
	int num, i;

		printf("数字を入力");
		scanf("%d", &num);
		i = 0;

		while (i<num) {
			printf(" * ");
			i ++;
			//i+=1; i=i+1;も同様
		}
}