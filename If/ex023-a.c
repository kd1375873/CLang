#include <stdio.h>
main()
{
	int h, s, m;
	printf("�b�������:");
	scanf("%d", &s);

	if (s <=5000)
	{
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
	}	
	else
	{
		printf("���̓G���[\n");
	}
		printf("%d���� %�� %�b\n", h, m, s);
}

