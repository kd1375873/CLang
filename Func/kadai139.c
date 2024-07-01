#include <stdio.h>
void hyouji(int su, char moji);
main()
{
	int su;
	char moji;

	printf("•¶šH");
	scanf("%c", &moji);
	printf("®”H");
	scanf("%d", &su);
	hyouji(su, moji);
}
void hyouji(int su, char moji)
{
	int i;
	for(i=0;i<su;i++)
	{
		printf("%c", moji);
	}
}