#include <stdio.h>
main()
{
	int i,j,w;
	int d[] = { 30,7,25,16,10 };

	for (i = 0; i < 5; i++)
	{
		for (j = i - 1; i >= 0; j--)
		{
			if (d[j + 1] >= d[j])
			{
				break;
			}
			w = d[j+1];
			d[j+1] = d[j];
			d[j] = w;
		}
	}

}