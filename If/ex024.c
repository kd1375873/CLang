#include <stdio.h>
main()
{
	char ch;
	printf("一文字入力"）;
	scanf(" % c",&ch);
	 
	if (ch >= 'A' && ch <= 'Z') {
		printf("大文字です\n");
	}
	else {
		printf("その他の文字です\n");
	}
	
