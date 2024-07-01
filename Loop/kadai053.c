#include <stdio.h>
main()
{
	int su, ia;

	printf("®”H");
	scanf("%d", &su);

	for (ia = 0; su + ia <= su + 10; ia++)
	{
		printf("%d",ia+su);
	}


}