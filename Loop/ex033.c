#include <stdio.h>
main()
{
	int sum, i,num;
sum = 0;
printf("数は？");
scanf("%d", &num);

for (sum=0,i = 0; num != -999; i++)
{
	sum += num;
	printf("数は？");
	scanf("%d", &num);

}
printf("合計=%d\t平均=%2f\n", sum, (float)sum / i);
}