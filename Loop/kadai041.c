#include <stdio.h>
main()
{
	int su, i, gukei;

	printf("�����i�|�X�X�X�ŏI���j�H");
	scanf("%d", &su);

	i = 0;
	gukei = 0;
	while (su != -999)
	{
		gukei += su;
		i++;
		printf("�����i�|�X�X�X�ŏI���j�H");
		scanf("%d", &su);
	}
	printf("���v��%d\n", gukei);
	printf("���ρ�%.2f\n", (float)gukei / i);


}