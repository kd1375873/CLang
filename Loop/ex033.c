#include <stdio.h>
main()
{
	int sum, i,num;
sum = 0;
printf("���́H");
scanf("%d", &num);

for (sum=0,i = 0; num != -999; i++)
{
	sum += num;
	printf("���́H");
	scanf("%d", &num);

}
printf("���v=%d\t����=%2f\n", sum, (float)sum / i);
}