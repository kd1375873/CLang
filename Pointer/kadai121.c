#include <stdio.h>
main()
{
	int a=100,b=10;
	int* suA,*suB;

	suA = &a;
	suB = &b;

	printf("%d+%d=%d\n", *suA, *suB, *suA + *suB);
	printf("%d-%d=%d\n", *suA, *suB, *suA - *suB);
	printf("%d*%d=%d\n", *suA, *suB, *suA * *suB);
	printf("%d/%d=%d\n", *suA, *suB, *suA / *suB);
}