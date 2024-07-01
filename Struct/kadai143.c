#include <stdio.h>
#include <stralign.h>
struct fruit
{
	char name[30];
		int price;
		int point;
		int number;
		int total;
};
main()
{
	struct fruit syouhin;
	strcpy(syouhin.name, "peach");
	syouhin.price = 300;
	syouhin.point = 5;
	syouhin.number = 3;
	syouhin.total = syouhin.price * syouhin.number;
	printf("è§ïiñº:%s\n", syouhin. name);
	printf("âøäi:%dâ~\n", syouhin.price);
	printf("Ç®Ç∑Ç∑Çﬂìx:");
		for (int i = 0; i < syouhin.point; i++)
		{
			printf("Åö");
		}
		printf("\nå¬êî:%d\n", syouhin.number);
		printf("ã‡äz:\\%d-\n", syouhin.total);

}