#include <stdio.h>
main()
{
	char moji;
	int  su1,su2;

	printf("処理を入力");
	scanf("%c", &moji);

	printf("整数を入力");
	scanf("%d%d", &su1, &su2);

	switch (moji)
	{
	case'd':
			//最大値を求める
			if(su1>su2)
			{
				printf("最大値は%dです\n", su1);
			}
			else
			{
				printf("最大値は%dです\n", su2);
			}
			break;
	case's':
		//最小値を求める
		if (su1 < su2)
		{
			printf("最小値は%dです\n", su1);
		}
		else
		{
			printf("最小値は%dです\n", su2);
		}
		break;

	case'g':
		//合計値を求める
		printf("合計は%dです\n", su1 + su2);
		break;

	case'h':
		//平均を求める
		printf("平均は%.2fです\n",(float)(su1 + su2) / 2);
		break;

	default:
		printf("処理エラー:(d:最大値　s:最小値　g:合計 h:平均)\n");
	}

}