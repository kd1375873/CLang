#include <stdio.h>
main()
{
	int data[9] = { 10,9,88,20,45,21,38,45,1 };
	int* p_data;
	int i,min,max;


	p_data = data;
	printf("�z����e\n");

	for (i = 0; i <= 8; i++)
	{
		printf("%.2d ", p_data[i]);
	}
	printf("\n");
	for (i = 0, max = *p_data;i<=8; i++, p_data++)
	{
		if (max < *p_data)
		{
			max = *p_data;
		}
	}

	p_data = data;
	for (i = 0, min = *p_data;i<=8; i++, p_data++)
	{
		if (min > *p_data)
		{
			min = *p_data;
		}
	}
	printf("�ő�l=%d\n", max);
	printf("�ŏ��l=%d\n", min);


	
}