#include <stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
	int kosu;
};
main()
{
	struct syohin_data syohin[3] = { {"�G���s�c",30,5},
	{"�P�V�S��",50,2},
	{"�t�f�o�R",500,3} };
	
	struct syohin_data* p = syohin;//p=syohin

	int i;
	for (i = 0; i < 3; i++,p++)
		//for(i = 0; i < 3; i++)
	{
		printf("���i��:%s\t", p->name);
		printf("�P��:%4d\t", p->tanka);
		printf("��:%4d\t", p->kosu);
		printf("���z:\\%4d\n", p->tanka * p->kosu);
	//p++
	}
}
