#include <stdio.h>
main()
{
	char* p_tbl[] = { "Progtammjing2","Algorithm","Programming1","C" };
	int i, j;
	char *w;
	for (i = 0; i < 3; i++)
	{
		for (j = i+1; j < 4; j++)
		{
			if (strcmp(p_tbl[i],p_tbl[j])>0)
			{
				w = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = w;
			}
		}
	}
		for (i = 0; i < 4; i++)
		{
			printf("%s\n", p_tbl[i]);
		}
}