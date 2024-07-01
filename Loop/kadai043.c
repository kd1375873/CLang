#include <stdio.h>
main()
{
	int su;
	char moji;

	printf("文字コード(-1で終了)?");
	scanf("%d", &su);
	while (su!= -1)
	{
		if (su==65)
		{
			moji= 'A';
	}
		if (su==97)
		{
			moji= 'a';
		}
		printf("%c\n",moji);
	printf("文字コード(-1で終了)?");
	scanf("%d", &su);
	}
}