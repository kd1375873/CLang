#include <stdio.h>
main()
{
	char moji;

	printf("アルファベット入力小文字？");
	scanf("%c", &moji);

	for (; moji >= 'a' && moji <= 'z'; moji++)
	{
		printf("%c", 1+moji-0x20);
	}
}