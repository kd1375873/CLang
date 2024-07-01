#include <stdio.h>
main()
{
	int C;
	char dumy[256];

	C = getchar();//一文字入力
	while (C != EOF)
	{
		putchar(C);
		putchar('\n');
		gets(dumy);//入力バッファクリア	
		C = getchar();
	}
}