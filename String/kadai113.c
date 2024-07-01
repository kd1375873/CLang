#include <stdio.h>
main()
{
	char a[] = "Gamesoft";
	int i, j;

	printf("•¶š—ñ=");
	for (i = 0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n•¶š”=");
	for (i = 0, j = 0; a[i] != '\0'; i++,j++);
	printf("%d", j);
	printf("•¶š\n");
}