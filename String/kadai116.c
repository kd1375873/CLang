#include <stdio.h>
main()
{
	char a[30];
	char b[30];
	int i,j;

	printf("•¶š—ñ‚PH");
	scanf("%s", &a);
	printf("•¶š—ñ‚QH");
	scanf("%s", &b);

	printf("%s",a);
	printf("\n");
	printf("%s",b);
	printf("\n");

	for (i = 0; a[i] != '\0'; i++);

	for (j = 0; b[j] != '\0'; j++)
	{
		a[i + j] = b[j];
	}
	a[i + j] = '\0';
	printf("%s", a);
}