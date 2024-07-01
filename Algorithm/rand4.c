#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int kazu,i;

	srand(time(0));

	kazu = rand() % 5 + 1;


	printf("今日のあなたの運勢は、");

	for(i=0;i<kazu;i++)
	{
		printf("☆");
	}
	printf("です。\n");
}