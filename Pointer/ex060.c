#include <stdio.h>
main()
{
	char date[] = "Language";
	char moji, * p_date;
	int i;
	
	printf("date[]=%s\n", date);
	printf("���������́H");
	scanf("%c" &moji);

	printf("�������ʂ́A");
	for (p_date = date,i=0;*(p_date + i) != '\0'; i++)
	{
		if (moji == *(p_date + i))
		{
			printf("%d", i + 1);
		}

	}
	printf("�����ڂł�\n");
}