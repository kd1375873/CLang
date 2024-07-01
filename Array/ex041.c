#include <stdio.h>
main()
{
	float sum, a[3];
	int i;
	for (sum = 0, i = 0; i < 3; i++)
	{


		printf("ŽÀ”‚ð“ü—Í");
		scanf("%f", &a[i]);
		sum += a[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n•½‹Ï‚Í%.2f‚Å‚·\n", sum, sum / 3);

	
}