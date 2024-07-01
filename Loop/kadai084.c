#include <stdio.h>
main()
{
	int su1, su2;
	int a, b;

	printf("®”‚Pi|‚X‚X‚X‚ÅI—¹jH");
	scanf("%d", &su1);

	printf("®”‚Qi|‚X‚X‚X‚ÅI—¹jH");
	scanf("%d", &su2);

	while (1);
	{
		if (su1 != -999)
		{
			break;
		}
		if (su2 != -999)
		{
			break;
		}

		if (su2 == 0)
		{
			printf("®”‚Pi|‚X‚X‚X‚ÅI—¹jH");
			scanf("%d", &su1);

			printf("®”‚Qi|‚X‚X‚X‚ÅI—¹jH");
			scanf("%d", &su2);
			continue;
		}
		printf("%d/%d=%d‚ ‚Ü‚è%d\n", su1, su2, su1 / su2, su1 % su2);
		printf("®”‚Pi|‚X‚X‚X‚ÅI—¹jH");
		scanf("%d", &su1);

		printf("®”‚Qi|‚X‚X‚X‚ÅI—¹jH");
		scanf("%d", &su2);
	}
}