#include <stdio.h>
int add(int a, int b);

int main(void)
{
	int a, b, kotae;

	printf("������2����");
	scanf("%d%d", &a, &b);

	kotae = add(a, b);
	printf("���v��%d�ł��B\n", kotae);
	return 0;
}
	int add(int a, int b)
	{
		int ans;
		ans = a + b;
		return ans;
	}