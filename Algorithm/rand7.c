#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int cnt=0, su,i;
	srand(time(0));

	i = rand() % 1000 + 1;
	
	printf("1�`1000�̒��œ�����̐���\�z���Ă�������\n");
	do
	{
		printf("������̐��́H->");
		scanf("%d", &su);
		if (i > su)
		{
			printf("������̐���菬�����ł�\n");
		}
		if (i < su)
		{
			printf("������̐����傫���ł�\n");
		}
		cnt++;
	}
	while (i != su);
		printf("�����I%d��ڂœ�����܂���\n", cnt);
}