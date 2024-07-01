#include <stdio.h>
main()
{
	char a[30];
	int i, j;

	printf("•¶š—ñ‚ÍH");
	scanf("%s",&a[0]);
	printf("•¶š—ñ:");
	for (i = 0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
	}
	printf("\t•¶š”=");
	for (i = 0, j = 0; a[i] != '\0'; i++, j++);
	printf("%d", j);
	printf("•¶š\n");
}