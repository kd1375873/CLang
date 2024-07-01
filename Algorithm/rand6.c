#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int janken,co;
	srand(time(0));
	printf("何を出しますか？\n(1:グー 2:チョキ 3:パー)>");
	scanf("%d", &janken);
	
	
	janken--;
	if (janken == 0)printf("プレイヤーはグーです\n");

	if (janken == 1)printf("プレイヤーはチョキです\n");

	if (janken == 2)printf("プレイヤーはパーです\n");

	co = rand() % 3;

	if (co == 0)printf("コンピューターはグーです\n");

	if (co == 1)printf("コンピューターはチョキです\n");

	if (co == 2)printf("コンピューターはパーです\n");

	if (janken == co)
	{
		printf("あいこです\n");
	}
	if (janken == 0)
	{
		if (co == 1)printf("プレイヤーの勝ちです。\n");
		if (co == 2)printf("コンピューターの勝ちです。\n");
	}
	if (janken == 1)
	{
		if (co == 0)printf("プレイヤーの勝ちです。\n");
		if (co == 2)printf("コンピューターの勝ちです。\n");
	}
	if (janken == 2)
	{
		if (co == 0)printf("プレイヤーの勝ちです。\n");
		if (co == 1)printf("コンピューターの勝ちです。\n");
	}
}

