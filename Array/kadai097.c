#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10], i;

	printf("�z��a=");
	for (i=0; i <=9; i++)
	{
		printf("%.2d ", a[i]);
	}
	printf("\n�z��c=");
	for (i = 0; i <= 9; i++)
	{
		c[i] = a[9 - i];
		printf("%.2d ", c[i]);
	}
}