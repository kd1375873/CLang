#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int w,i;
	printf("配列aと配列bを交換すると\n");
	
	for (i = 0; i <= 9; i++)
	{
		w = a[i];
		a[i] = b[i];
		b[i] = w;
	}

	printf("配列a=");
	for(i=0;i<=9;i++)
	{
		printf("%.2d ", a[i]);
	}
	printf("\n配列b=");
	for (i = 0; i <= 9; i++)
	{
		printf("%.2d ", b[i]);
	}
}