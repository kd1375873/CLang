#include <stdio.h>
main()
{
	int itbl[3] = { 10,20,30 };
	int* p_itbl;
	double dtbl[3] = { 10.0,20.0,30 };
	double * p_itbl;

	p_itbl = itbl;
	printf("*p_itbl=%d\t", *p_itbl);
	p_itbl++;
	printf(" % d\t", *p_itbl);
	p_itbl++;
	printf(" % d\n", *p_itbl);

	p_itbl = dtbl;
	printf("*p_itbl=%.1f\t", *p_itbl);

}