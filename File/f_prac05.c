#include<stdio.h>
#define MapNum 3
#define W 10
#define H 5
 
typedef struct
{
	int m_map[H][W];
}Map;
void SetMap(char* filename, Map* m);
void DrawMap(Map m);
main()
{
	Map MapData;//マップのデータを管理する構造体；
		char* MapFileName[MapNum] =
	{ "map0.txt","map1.txt","map2.txt" };
	int select;
	printf("表示マップ?(0,1,2)>");
	scanf("%d",&select);
	if (select >= 0 && select <= 2)
	{
		SetMap(MapFileName[select], &MapData);
		DrawMap(MapData);
	}
}
void SetMap(char* filename, Map* m)
{
	FILE* fp;
	char ch;
	int i, j;
	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i <H; i++)
		{
			for (j = 0; j < W; j++)
			{
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';//'0'の文字コードを入れると文字を数字に直せる
			}
			fgetc(fp);//改行文字を読み飛ばす
		}
		fclose(fp);
	}
}
	void DrawMap(Map m)
	{
		int i, j;
		for (i=0;i<H;i++)
		{
			for (j=0;j<W;j++)
			{
				if (m.m_map[i][j]==1)
				{
					printf("ﾛ");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
}