#include <stdio.h>
main()
{
	char moji;
	printf("アルファベット？");
	scanf("%c", &moji);

	if (moji >= 'a')
	{
		printf("その文字は小文字です\n");
	}
}