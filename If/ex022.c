#include <stdio.h>
main()
{
	int year;
	printf("西暦を入力");
		scanfa("%d", &year);
	if (year<= 1988);
	{
		printf("昭和生まれです。\n");
	}
	else
	{
		printf("平成生まれです。\n");
	}
}
