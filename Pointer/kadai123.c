#include <stdio.h>
main()
{
	double a, b;
	double* p_a, * p_b;

	p_a = &a;
	p_b = &b;

	printf("�����l1?");
	scanf("%lf",&a);
	printf("�����l2?");
	scanf("%lf", &b);

	printf("�傫���ق�=");
	if (*p_a < *p_b)
	{
		printf("%f", *p_b);
	}
	else
	{
		printf("%f", *p_a);
	}
}