#include <stdio.h>
main()
{
	int max_score = 0,score=0;
	char ch, max_name[20],name[20];
	FILE* fp;
	//score.txt����̓ǂݍ��ݏ���
	// �@�t�@�C���̃I�[�v��
	fp = fopen("f_prac01.txt", "r");
	// �Amax_name,max_score�̓ǂݍ���
	fscanf(fp, "%s%d", max_name, &max_score);
	// �B�t�@�C���̃N���[�Y
	fclose(fp);
//�C��ʏ�ɍō����_�҂̏���\��
	printf("�ō����_�@���O:%s�@�X�R�A:%d\n", max_name, max_score);
	printf("�v���C���[�̖��O:");
	scanf("%s", name);
	while(1)
	{
		printf("���݂̃X�R�A:%d('e'�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
	if (score > max_score)
	{
		//�t�@�C���������ݏ���
		//�@�t�@�C���̃I�[�v��
		fp = fopen("f_prac01.txt", "w");
		//�A�t�@�C���ւ�name��score�̏�������
		fprintf(fp, "%s\n%d\n", name, score);
		//�B�t�@�C���̃N���[�Y
		fclose(fp);
	}
}