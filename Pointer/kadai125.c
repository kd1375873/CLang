#include <stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p_data,i;

	
	printf("�|�C���g���Œ�ŕ\��\n");
	printf("�z��data[]\n");
	for (i = 0; i <= 7; i++)
	{
		printf("%d", data[i]);
	}
	printf("\n");
	printf("�|�C���g��ω������ĕ\��\n");
	printf("�z��data[]\n");
	p_data = data;
	for (i= 0; i<= 7;i++,p_data++)
	{
		printf("%d", *p_data);
	}

	
}