#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int janken,co;
	srand(time(0));
	printf("�����o���܂����H\n(1:�O�[ 2:�`���L 3:�p�[)>");
	scanf("%d", &janken);
	
	
	janken--;
	if (janken == 0)printf("�v���C���[�̓O�[�ł�\n");

	if (janken == 1)printf("�v���C���[�̓`���L�ł�\n");

	if (janken == 2)printf("�v���C���[�̓p�[�ł�\n");

	co = rand() % 3;

	if (co == 0)printf("�R���s���[�^�[�̓O�[�ł�\n");

	if (co == 1)printf("�R���s���[�^�[�̓`���L�ł�\n");

	if (co == 2)printf("�R���s���[�^�[�̓p�[�ł�\n");

	if (janken == co)
	{
		printf("�������ł�\n");
	}
	if (janken == 0)
	{
		if (co == 1)printf("�v���C���[�̏����ł��B\n");
		if (co == 2)printf("�R���s���[�^�[�̏����ł��B\n");
	}
	if (janken == 1)
	{
		if (co == 0)printf("�v���C���[�̏����ł��B\n");
		if (co == 2)printf("�R���s���[�^�[�̏����ł��B\n");
	}
	if (janken == 2)
	{
		if (co == 0)printf("�v���C���[�̏����ł��B\n");
		if (co == 1)printf("�R���s���[�^�[�̏����ł��B\n");
	}
}

