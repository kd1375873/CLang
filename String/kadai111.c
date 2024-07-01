#include <stdio.h>
main()
{
	char a[10] = "abcde";
	int i;


	for (i = 0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
	}
}