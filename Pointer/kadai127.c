#include <stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 };
	double* p;
	double sum;
	int i;

	p = data;

	printf("�z��̓��e\n");
	printf("�z��data[]=");
	for (i = 0, sum = 0; i < 5; i++,p++)
	{
		printf("%f ", *p);
		sum += *p;
	}
	printf("\n���v=%.3f \n", sum);
	printf("����=%.3f \n",(double)sum / i);
}