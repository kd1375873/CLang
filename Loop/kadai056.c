#include <stdio.h>
main()
{
	char moji;

	printf("アルファベット入力？");
	scanf("%c",&moji);

	for (;moji>='a'&&moji<= 'z';moji++)
	{
		printf("%c", moji);
	}
}