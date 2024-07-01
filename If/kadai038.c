#include <stdio.h>
main()
{
	char moji;

	printf("ˆê•¶Žš“ü—ÍH");
	scanf("%c", &moji);

	if (moji >= 'A' && moji <= 'Z')
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c\n", moji + 0x20);
	}
	if (moji >= 'a' && moji <= 'z')
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c\n", moji - 0x20);
	}
}