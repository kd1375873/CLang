#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int i, sum;

	printf("配列a=");
	for (i = 0, sum = 0; i <= 9; i++)
	{
		sum += a[i];
		printf("%.2d ", a[i]);
	}
	printf("\n合計=%d 平均=%.2f \n", sum, (float)sum / i);
	printf("配列b=");
	for (i = 0, sum = 0; i <= 9; i++)
	{
		sum += b[i];
		printf("%.2d ", b[i]);
	}
	printf("\n合計=%d 平均=%.2f \n", sum, (float)sum / i);

}