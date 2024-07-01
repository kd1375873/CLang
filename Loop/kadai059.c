#include <stdio.h>
main()
{
	int su, i, j,;

	printf("      1  2  3  4  5  6  7  8  9\n");
	printf("===============================\n");

	for (i = 1; i <= 9; i++)
	{
		printf("%d|  ",i);
		for (j = 1; j <= 9; j++)
		{
			printf("%3d", i*j);
		}
		printf("\n");
	}
	//printf("\n");
	//for (i = 1; i <= 9; i++)
	//{
	//	printf("%3d",i*2);
	//}
	//printf("\n");
	//for (i = 1; i <= 9; i++)
	//{
	//	printf("%3d", i * 3);
	//}
	//printf("\n");
	//for (i = 1; i <= 9; i++)
	//{
	//	printf("%3d", i * 4);
	//}
	//for (i = 1; i <= 9; i++)
	//{
	//	for (j = 1; j <=9; j++)
	//	{
	//		printf("%2d",su);
	//	}
	//	printf("\n");
	//}

}