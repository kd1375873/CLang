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
	printf("���i��:%s\n", syouhin. name);
	printf("���i:%d�~\n", syouhin.price);
	printf("�������ߓx:");
		for (int i = 0; i < syouhin.point; i++)
		{
			printf("��");
		}
		printf("\n��:%d\n", syouhin.number);
		printf("���z:\\%d-\n", syouhin.total);

}