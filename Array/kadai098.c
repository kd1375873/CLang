#include <stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int i, max, min;

	printf("�z��@data=");
	for (i = 0; i <= 9; i++)
	{
		printf("%.2d ", data[i]);
	}
	for (i = 0, max = data[0]; i <= 9; i++)
	{
		if (max < data[i])
		{
			max = data[i];
		}
	}
	for (i = 0, min = data[0]; i <= 9; i++)
	{
		if (min > data[i])
		{
			min = data[i];
		}
	}
	printf("\n�ő�l=%d �ŏ��l=%d", max, min);
}