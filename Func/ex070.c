#include <stdio.h>
int add(int a, int b);

int main(void)
{
	int a, b, kotae;

	printf("®”‚ğ2‚Â“ü—Í");
	scanf("%d%d", &a, &b);

	kotae = add(a, b);
	printf("‡Œv‚Í%d‚Å‚·B\n", kotae);
	return 0;
}
	int add(int a, int b)
	{
		int ans;
		ans = a + b;
		return ans;
	}