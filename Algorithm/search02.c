#include <stdio.h>
main()
{
	int i, s, d[11]={ 10,5,30,77,16,3,47,29,37,33,55 };
	printf("�T���l�����");
	scanf("%d", &s);
	i = 0;

	while (s != d[i])//for(d[10]=s,i=0;s!=d[i];i++);
	{
		i++;
	}
		if (i == d[11])
		{
			printf("������Ȃ�����\n");
		}
	else
	{
		printf("�T���l%d���Ad[%d]�Ŕ����I\n", s, i);
	}
}