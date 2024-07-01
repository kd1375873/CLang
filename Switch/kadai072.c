#include <stdio.h>
main()
{
	char moji;

	printf("アルファベット？");
	scanf("%c", &moji);

	switch (moji)
	{
	case'a':
		printf("America\n");
		printf("Australia\n");
		break;
	case'e':
		printf("England\n");
		break;
	case'f':
		printf("France\n");
		break;
	case'j':
		printf("japan\n");
		break;
	}
}