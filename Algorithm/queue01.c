#include <stdio.h>
#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

//�֐��v���g�^�C�v�錾
void display(void);
int enqueue(int d);
int dequeue(int* pd);

//���C���֐�
main()
{
	int key, data, result;

	do 
	{
		printf("\n\n??�G���L���[��i�A�f�L���[��o����͂��ā�");
		key = getchar();
		printf("\n");
		//�G���L���[����
		if (key == 'i')
		{
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1)
			{
				printf("\n�������L���[�������ς��ł�������\n");
			}
			else
			{
				display();
			}
		}
		//�f�L���[����
		if (key == 'o')
		{
			result = dequeue(&data);
			if (result == -1)
			{
				printf("\n�������L���[����ł�������\n");
			}
			else
			{
				printf("�L���[����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
		while (key != 'e');
	}
}
void display(void)