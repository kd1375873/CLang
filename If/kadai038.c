#include <stdio.h>
main()
{
	char moji;

	printf("�ꕶ�����́H");
	scanf("%c", &moji);

	if (moji >= 'A' && moji <= 'Z')
	{
		printf("�ϊ����ʂ�%c\n", moji + 0x20);
	}
	if (moji >= 'a' && moji <= 'z')
	{
		printf("�ϊ����ʂ�%c\n", moji - 0x20);
	}
}