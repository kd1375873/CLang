#include <stdio.h>
main()
{
	int su;
	char moji;

	printf("�����R�[�h(-1�ŏI��)?");
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
	printf("�����R�[�h(-1�ŏI��)?");
	scanf("%d", &su);
	}
}