#include <stdio.h>
struct profile student;
struct profile *p:
	p = &student;

	printf("���O�����":);
	scanf("%s", p->name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d", &p->birth[0]
		, &p->birth[1]
		, &p->birth[2]);
	printf("���t�^�����:");
	scanf("%s", p->blood);
	printf("%s--%d�N%d��%d����  ���t�^�[%s�^\n"
		, p->name
		, p->birth[0]
		, p->birth[1]
		, p->birth[2]
		, p->blood);