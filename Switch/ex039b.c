#include <stdio.h>
main()
{
	char moji;
	int  su1, su2,su3,s;

	printf("���������");
	scanf("%c", &moji);

	printf("���������");
	scanf("%d%d%d", &su1, &su2,&su3);

	switch (moji)
	{
	case'd':
		//�ő�l�����߂�
		s = su1;
		if (s > su2) { s = su2; }
		if (s < su3) { s = su3; }
			printf("�ő�l��%d�ł�\n", s);
		break;
	case's':
		//�ŏ��l�����߂�
		s = su1;
		if (s < su2) { s = su2; }
		if (s > su3) { s = su3; }
			printf("�ŏ��l��%d�ł�\n", s);
		break;

	case'g':
		//���v�l�����߂�
		printf("���v��%d�ł�\n", su1 + su2+su3);
		break;

	case'h':
		//���ς����߂�
		printf("���ς�%.2f�ł�\n", (float)(su1 + su2+su3) / 3);
		break;

	default:
		printf("�����G���[:(d:�ő�l�@s:�ŏ��l�@g:���v h:����)\n");
	}

