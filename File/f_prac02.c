#include <stdio.h>
main()
{
	int max_score = 0,score=0;
	char ch, max_name[20],name[20];
	FILE* fp;
	//score.txtからの読み込み処理
	// �@ファイルのオープン
	fp = fopen("f_prac01.txt", "r");
	// �Amax_name,max_scoreの読み込み
	fscanf(fp, "%s%d", max_name, &max_score);
	// �Bファイルのクローズ
	fclose(fp);
//�C画面上に最高得点者の情報を表示
	printf("最高得点　名前:%s　スコア:%d\n", max_name, max_score);
	printf("プレイヤーの名前:");
	scanf("%s", name);
	while(1)
	{
		printf("現在のスコア:%d('e'で終了)\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
	if (score > max_score)
	{
		//ファイル書き込み処理
		//�@ファイルのオープン
		fp = fopen("f_prac01.txt", "w");
		//�Aファイルへのnameとscoreの書き込み
		fprintf(fp, "%s\n%d\n", name, score);
		//�Bファイルのクローズ
		fclose(fp);
	}
}