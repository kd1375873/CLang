#include <stdio.h>
struct profile student;
struct profile *p:
	p = &student;

	printf("名前を入力":);
	scanf("%s", p->name);
	printf("生年月日を空白で区切って入力:");
	scanf("%d%d%d", &p->birth[0]
		, &p->birth[1]
		, &p->birth[2]);
	printf("血液型を入力:");
	scanf("%s", p->blood);
	printf("%s--%d年%d月%d日生  血液型ー%s型\n"
		, p->name
		, p->birth[0]
		, p->birth[1]
		, p->birth[2]
		, p->blood);
