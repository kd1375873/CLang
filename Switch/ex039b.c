#include <stdio.h>
main()
{
	char moji;
	int  su1, su2,su3,s;

	printf("処理を入力");
	scanf("%c", &moji);

	printf("整数を入力");
	scanf("%d%d%d", &su1, &su2,&su3);

	switch (moji)
	{
	case'd':
		//最大値を求める
		s = su1;
		if (s > su2) { s = su2; }
		if (s < su3) { s = su3; }
			printf("最大値は%dです\n", s);
		break;
	case's':
		//最小値を求める
		s = su1;
		if (s < su2) { s = su2; }
		if (s > su3) { s = su3; }
			printf("最小値は%dです\n", s);
		break;

	case'g':
		//合計値を求める
		printf("合計は%dです\n", su1 + su2+su3);
		break;

	case'h':
		//平均を求める
		printf("平均は%.2fです\n", (float)(su1 + su2+su3) / 3);
		break;

	default:
		printf("処理エラー:(d:最大値　s:最小値　g:合計 h:平均)\n");
	}

