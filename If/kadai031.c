#include <stdio.h>
main()
{
	double  ia, ib;

	printf("�Q�̎����l");
	scanf("%lf %lf", &ia, &ib);

	if (ia > ib)
	{
		printf("�傫���̂�=%lf\n", ia);
	}
	else
		printf("�傫���̂�=%lf\n", ib);
}