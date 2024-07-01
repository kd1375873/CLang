#include <stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
	int kosu;
};
main()
{
	struct syohin_data syohin[3] = { {"エンピツ",30,5},
	{"ケシゴム",50,2},
	{"フデバコ",500,3} };
	
	struct syohin_data* p = syohin;//p=syohin

	int i;
	for (i = 0; i < 3; i++,p++)
		//for(i = 0; i < 3; i++)
	{
		printf("商品名:%s\t", p->name);
		printf("単価:%4d\t", p->tanka);
		printf("個数:%4d\t", p->kosu);
		printf("金額:\\%4d\n", p->tanka * p->kosu);
	//p++
	}
}
