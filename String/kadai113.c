#include <stdio.h>
main()
{
	char a[] = "Gamesoft";
	int i, j;

	printf("������=");
	for (i = 0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n������=");
	for (i = 0, j = 0; a[i] != '\0'; i++,j++);
	printf("%d", j);
	printf("����\n");
}