#include <stdio.h>
main()
{
	char moji;
	int  su1,su2;

	printf("���������");
	scanf("%c", &moji);

	printf("���������");
	scanf("%d%d", &su1, &su2);

	switch (moji)
	{
	case'd':
			//�ő�l�����߂�
			if(su1>su2)
			{
				printf("�ő�l��%d�ł�\n", su1);
			}
			else
			{
				printf("�ő�l��%d�ł�\n", su2);
			}
			break;
	case's':
		//�ŏ��l�����߂�
		if (su1 < su2)
		{
			printf("�ŏ��l��%d�ł�\n", su1);
		}
		else
		{
			printf("�ŏ��l��%d�ł�\n", su2);
		}
		break;

	case'g':
		//���v�l�����߂�
		printf("���v��%d�ł�\n", su1 + su2);
		break;

	case'h':
		//���ς����߂�
		printf("���ς�%.2f�ł�\n",(float)(su1 + su2) / 2);
		break;

	default:
		printf("�����G���[:(d:�ő�l�@s:�ŏ��l�@g:���v h:����)\n");
	}

}