#include <stdio.h>
main()
{
	char a[30];
	int i, j;

	printf("文字列は？");
	scanf("%s",&a[0]);
	printf("文字列:");
	for (i = 0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
	}
	printf("\t文字数=");
	for (i = 0, j = 0; a[i] != '\0'; i++, j++);
	printf("%d", j);
	printf("文字\n");
}