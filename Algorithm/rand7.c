#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int cnt=0, su,i;
	srand(time(0));

	i = rand() % 1000 + 1;
	
	printf("1`1000‚Ì’†‚Å“–‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");
	do
	{
		printf("“–‚½‚è‚Ì”‚ÍH->");
		scanf("%d", &su);
		if (i > su)
		{
			printf("“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
		}
		if (i < su)
		{
			printf("“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
		cnt++;
	}
	while (i != su);
		printf("³‰ğI%d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½\n", cnt);
}