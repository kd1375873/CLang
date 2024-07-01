#include <stdio.h>
main()
{
	char date[] = "Language";
	char moji, * p_date;
	int i;
	
	printf("date[]=%s\n", date);
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c" &moji);

	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (p_date = date,i=0;*(p_date + i) != '\0'; i++)
	{
		if (moji == *(p_date + i))
		{
			printf("%d", i + 1);
		}

	}
	printf("•¶š–Ú‚Å‚·\n");
}