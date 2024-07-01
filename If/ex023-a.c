#include <stdio.h>
main()
{
	int h, s, m;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &s);

	if (s <=5000)
	{
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
	}	
	else
	{
		printf("“ü—ÍƒGƒ‰[\n");
	}
		printf("%dŠÔ %•ª %•b\n", h, m, s);
}

