#include <stdio.h>

struct profile
{
	char name[20];
	int birth[3];
	int blood[5];
};
main()
{
	struct profile student[5];
	struct profile* p;
	int i;

	p = student;

	for (i = 0; i < 5; i++)
	{
		printf("%d�l��(���O).:", i + 1);
		scanf("%s", p->name);
		printf(" % d�l��(���N����) :", i + 1);
		scanf("%s", p->birth);
		printf(" % d�l��(���t�^):", i + 1);
		scanf("%s", p->blood);
		p++;
	}
	p = student;

	for (i = 0; i < 5; i++)
	{
		if (strcmp(p->blood),"A") == 0)
		{
			printf("%s�[�[%d�N%d��%d�����܂� ���t�^�[%s");
		}
	}
}