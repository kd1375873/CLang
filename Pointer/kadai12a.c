#include <stdio.h>
main()
{
	int a[] = { 3,5,7,9,11,13,15,17,19,21 };
	int b[] = { 4,8,12,16,20,24,28,32,38,42 };
	int* pa = a, * pb = b, j, i;
	printf("�[�[�[���s�O�[�[�[\n");
	printf("�z��a[]=");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", pa[i]);
	}
	printf("\n�z��b[]=");
	for (j = 0; j < 10;j++)
	{
		printf("%d ", pb[i]);
	}
	printf("\n�[�[�[���s��[�[�[\n");
	printf("�z��a[]=");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", pa[i]);
	}
	printf("\n�z��b[]=");
	for (j=0,i--; i >0; j++,i--)
	{
		pb[j] = pa[i];
		printf("%d ", pb[j]);
	}
}