#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int w,i;
	printf("�z��a�Ɣz��b�����������\n");
	
	for (i = 0; i <= 9; i++)
	{
		w = a[i];
		a[i] = b[i];
		b[i] = w;
	}

	printf("�z��a=");
	for(i=0;i<=9;i++)
	{
		printf("%.2d ", a[i]);
	}
	printf("\n�z��b=");
	for (i = 0; i <= 9; i++)
	{
		printf("%.2d ", b[i]);
	}
}