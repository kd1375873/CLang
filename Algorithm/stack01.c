#include <stdio.h>
#define STACKSIZE 8
int stack[STACKSIZE];
int sp = 0;

void display(void);
int push(int d);
int pop(int* pd);

main()
{
	int key, data, result;
	do {
		printf("\n\n??�v�b�V����i�A�|�b�v��o����͂���>");
		key = getche();
		printf("\n");
		//�v�b�V������
		if(key=='i'){
		printf("�f�[�^����>");
		scanf("%d", &data);
		result = push(data);
		if (result == -1)
		{
			printf("\n�������X�^�b�N����t�ł�������\n");
		}
		else{
			display();
		}
	}
//�|�b�v����
if (key == 'o')
{
	result = pop(&data);
	if(result==-1)
	{
		printf("\n�������X�^�b�N���J���ł�������\n");
	}
	else {
		printf("�X�^�b�N����f�[�^(%d)�����o���܂���\n", data);
		display();
	}
}
}
while (key != 'e');
}