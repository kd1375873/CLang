#include <stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 };
	double* p;
	double sum;
	int i;

	p = data;

	printf("配列の内容\n");
	printf("配列data[]=");
	for (i = 0, sum = 0; i < 5; i++,p++)
	{
		printf("%f ", *p);
		sum += *p;
	}
	printf("\n合計=%.3f \n", sum);
	printf("平均=%.3f \n",(double)sum / i);
}