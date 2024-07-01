#include <stdio.h>
#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

//関数プロトタイプ宣言
void display(void);
int enqueue(int d);
int dequeue(int* pd);

//メイン関数
main()
{
	int key, data, result;

	do 
	{
		printf("\n\n??エンキューはi、デキューはoを入力して＞");
		key = getchar();
		printf("\n");
		//エンキュー処理
		if (key == 'i')
		{
			printf("データ入力＞");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1)
			{
				printf("\n※※※キューがいっぱいです※※※\n");
			}
			else
			{
				display();
			}
		}
		//デキュー処理
		if (key == 'o')
		{
			result = dequeue(&data);
			if (result == -1)
			{
				printf("\n※※※キューが空です※※※\n");
			}
			else
			{
				printf("キューからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
		while (key != 'e');
	}
}
void display(void)