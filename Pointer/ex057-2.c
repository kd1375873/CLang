#include <stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},
					 {40,50,60},
					 {70,80,90} };
	int i, * p_tbl;

	p_tbl = &tbl[0][1];
	printf("�񎟌��z��tbl�̓��e\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d", *p_tbl);
		 p_tbl +=3
	}
}