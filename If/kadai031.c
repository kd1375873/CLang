#include <stdio.h>
main()
{
	double  ia, ib;

	printf("２つの実数値");
	scanf("%lf %lf", &ia, &ib);

	if (ia > ib)
	{
		printf("大きいのは=%lf\n", ia);
	}
	else
		printf("大きいのは=%lf\n", ib);
}