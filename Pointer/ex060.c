#include <stdio.h>
main()
{
	char date[] = "Language";
	char moji, * p_date;
	int i;
	
	printf("date[]=%s\n", date);
	printf("検索文字は？");
	scanf("%c" &moji);

	printf("検索結果は、");
	for (p_date = date,i=0;*(p_date + i) != '\0'; i++)
	{
		if (moji == *(p_date + i))
		{
			printf("%d", i + 1);
		}

	}
	printf("文字目です\n");
}