#include <stdio.h>
main()
{
	int suA, suB;
	char K;

	printf("����1�H");
	scanf("%d", &suA);

	printf("����2�H");
	scanf("%d", &suB);

	printf("���Z�q�H");
	scanf("%*c%c", &K);
	
	switch (K)
	{
	case '+':
			printf("%d+%d=%d\n", suA, suB, suA + suB);
			break;
	case'-':
		printf("%d-%d=%d\n", suA, suB, suA - suB);
		break;
	case'*':
		printf("%d*%d=%d\n", suA, suB, suA * suB);
		break;
	case'/':
		printf("%d/%d=%d\n", suA, suB, suA / suB);
		break;
	case'%':
		printf("%d%%d=%d\n", suA, suB, suA % suB);
		break;
	}





}