#include <stdio.h>
main()
{
	float sum, a[3];
	int i;
	for (sum = 0, i = 0; i < 3; i++)
	{


		printf("���������");
		scanf("%f", &a[i]);
		sum += a[i];
	}
	printf("���v��%.2f�ł�\n���ς�%.2f�ł�\n", sum, sum / 3);

	
}