#include <stdio.h>
void hyouji(int su, char moji);
main()
{
	int su;
	char moji;

	printf("文字？");
	scanf("%c", &moji);
	printf("整数？");
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