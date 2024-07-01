#include <stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p_data,i;

	
	printf("ポイントを固定で表示\n");
	printf("配列data[]\n");
	for (i = 0; i <= 7; i++)
	{
		printf("%d", data[i]);
	}
	printf("\n");
	printf("ポイントを変化させて表示\n");
	printf("配列data[]\n");
	p_data = data;
	for (i= 0; i<= 7;i++,p_data++)
	{
		printf("%d", *p_data);
	}

	
}