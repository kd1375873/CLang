#include <stdio.h>
main()
{
	int C;
	char dumy[256];

	C = getchar();//�ꕶ������
	while (C != EOF)
	{
		putchar(C);
		putchar('\n');
		gets(dumy);//���̓o�b�t�@�N���A	
		C = getchar();
	}
}