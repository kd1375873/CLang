#include <stdio.h>
main()
{
	int su;
	printf("���������");
	scanf("%d", &su);
	
	switch (su/10)
	{
	case 1:
		printf("10�_��ł�\n");
		break;
	case 2:
		printf("�Q�O�_��ł�\n");
		break;
	case 3:
		break;
		printf("�R�O�_��ł�\n");
	case 4:
		break;
		printf("�S�O�_��ł�\n");
	default:
		printf("�G���[(�P�O�`�S�X�����\n");
	}
}