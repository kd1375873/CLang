#include <stdio.h>
main()
{
	int su,i;
	char moji;

for (su = 20, moji = '!'; su >= 0x32 && su <= 0x126; su++, moji++)
{
	for (i = 0; i < 10; i++)
	{
		("%2x%c", su,moji);
			
	}
	printf("\n");
}
}