#include <stdio.h>
main()
{
	char a[30];
	char b[30];
	char w[30];
	int i, j;

	printf("•¶š—ñ‚PH");
	scanf("%s", &a);
	printf("•¶š—ñ‚QH");
	scanf("%s", &b);

	for (i = 0; a[i] != '\0'; i++)
	{
		w[i] = a[i];
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		w[i+j] = b[j];
	}
	printf("%s", w);
}