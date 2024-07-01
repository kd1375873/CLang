#include <stdio.h>
main()
{
	int su1, su2,su3,goukei;
	printf("整数を三個入力：");
	scanf("%d%d%d", &su1, &su2, &su3);
	
	goukei = su1 + su2 + su3;

	printf("合計=%d", goukei); //合計を表示
	//printf("平均%.2f", goukei / 3.0);　//平均を表示
	printf("平均%.2f,"(float)goukei / 3);
}
