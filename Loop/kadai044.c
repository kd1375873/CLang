#include <stdio.h>
main()
{
	int i, su;

	printf("���������(-999�œ��͏I��)�H");
	scanf("%d", &su);

	i = 0;
	while (su != -999)
	{
		printf("�W�i��=%o\t�P�U�i�� = % x\n", su, su);
		printf("���������(-999�œ��͏I��)�H");
		scanf("%d", &su);
	}
}