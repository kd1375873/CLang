#include <stdio.h>
main()
{
	int su, syu;

	printf("0����100�܂ł̐����H");
	scanf("%d", &su);

	if (su >= 90)
	{
		syu = 5;
		}
	if (su >= 80&&su<90)
	{
		syu = 4;
	}
if (su >= 50&&su<80)
{
	syu = 3;
}
if (su >= 30 && su < 50)
{
	syu = 2;
}
if(su<=30)
{
	syu = 1;
}
printf("���̐��l�̔��茋�ʂ́u%d�v�ł��B\n", syu);
}