#include <stdio.h>
main()
{
	int su;
	char moji;
	printf("�P�O�i���̐����H");
	scanf("%d", &su);

	printf("�A���t�@�x�b�g(o or h or d)");
	scanf("%*c%c", &moji);

	switch (moji)
	{
	case'o':
		printf("%o\n", su);
		break;
	case'O':
		printf("%o\n", su);
		break;

	case'h':
		printf("%x\n", su);
		break;

	case'H':
		printf("%x\n", su);
		break;
	default:
		printf("%d\n", su);
	}
}