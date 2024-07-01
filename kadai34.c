#include <stdio.h>
main()
{
	char moji;

	printf("アルファベット？");
	scanf("%c", &moji);

	if (moji >= 'A')
	{
		printf("アルファベットです\n");
	}
	else
	{
		printf("エラー\n");
	}
}