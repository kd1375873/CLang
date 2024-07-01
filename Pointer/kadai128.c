#include <stdio.h>
main()
{
	int a[] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* pa = a, * pb = b, i, j;

	printf("”z—ñb[]=");
	
	for (i = 0, j = 0; j <= 10; i++, j++)
	{
		if (i==10)
		{
			pa[i] = '\0';
			pb[j] = '\0';
			break;
		}
		pb[j] = pa[i] + pb[j];
		printf("%d ", pb[j]);
	}
}