#include <stdio.h>
main()
{
	int suA, suB;
	char K;

	printf("整数1？");
	scanf("%d", &suA);

	printf("整数2？");
	scanf("%d", &suB);

	printf("演算子？");
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