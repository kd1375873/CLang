#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int kazu;

	srand(time(0));

	kazu = rand() % 100 + 1;
		
		if (kazu <= 30)
		{
			printf("会心の一撃\n");
		}
		else 
		{
			printf("通常攻撃\n");
		}
}