#include <stdio.h>
main()
{
	int su, i,j;
	char moji[10];
	printf("‰ñ”•¶š‚ğ“ü—Í");
	scanf("%d%s", &su,&moji[0]);
	for (i = 0; i < su; i++)
	{
		for (j = 0; moji[j] != '\0'; j++);
		printf("%s\t",&moji[0]);
	}
}