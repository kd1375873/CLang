#include <stdio.h>
main()
{
	int num, sun,i;

	printf("����(-�X�X�X�ŏI��)?");
	scanf("%d", &num);
	
	sun = 0;
	i = 0;

	while (num != -999)
	{
		if (num == -999)
		{
			break;
		}
		i++;
		sun += num;
		printf("����(-�X�X�X�ŏI��)?");
		scanf("%d", &num);
	}
	printf("���v=%d\n ����=%.2f\n",sun,(float)sun/i);
}