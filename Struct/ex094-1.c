#include <stdio.h>
struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];//名前
	struct day birth;//生年月日
	char blood[5];//血液型
};

main()
{
	//構造体配列の宣言
	struct  profile student[5] =
	{
		{ "kirin"	,(2000.1,1),"A" },
		{ "pen"		,(2001.2,2),"B" },
		{ "rai"		,(2002.1,3),"C" },
		{ "gori"	,(2003.1,4),"AB" },
		{ "koa"		,(2004.2,5),"A" },
	};
	struct profile* p;
	int i;

	p = student;

	for (i = 0; i < 5; i++)
	{
		if (p->birth.tuki==2)
		{
			printf("%sーー%d年%d月%d日生まれ　血液型ー%s型\n", p->name,p->birth.nen, p->birth.tuki, p->birth.hi, p->blood);

		}
		p++;
	}
}