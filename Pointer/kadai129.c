#include <stdio.h>
main()
{
	int a[] = { 3,5,7,9,11,13,15,17,19,21 };
	int b[] = { 4,8,12,16,20,24,28,32,38,42 };
	int*pa = a, * pb = b,w,i;
	printf("ーーー実行前ーーー\n");
	printf("配列a[]=");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", pa[i]);
}
	printf("\n配列b[]=");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", pb[i]);
	}
	printf("\nーーー実行後ーーー\n");
	for (i = 0; i < 10; i++)
	{
		w = pa[i];
		pa[i] = pb[i];
		pb[i] = w;
	}
	printf("配列a[]=");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", pa[i]);
	}
	printf("\n配列b[]=");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", pb[i]);
	}

}