#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i, n, s[80], k[80];

	srand(time[0]);

	printf("s‚ğ“ü—Í");
	scanf("%s", s[]);

	i = 0;
	while (s[i] != '\0')
	{
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ‚ÍA%s\n", &s[0]);
	n = 0;
	while (n < i)
	{
		n++;
		printf("%d", k[n]);
	}
	printf("\n");
}