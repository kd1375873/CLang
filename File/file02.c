#include<stdio.h>
main()
{
	FILE* fp;
	int lv, hp;
	char c, str[256], equip[256];
	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s", str);
	printf("õ1F%s\n", str);
	fscanf(fp, "%s", str);
	printf("õ2F%s\n", str);
	fscanf(fp, "%s", str);
	printf("õ3F%s\n", str);
	//
	fscanf(fp, "%d%d%s",&lv, &hp,equip);
	printf("lv:%d hp:%d õ:%s\n", lv, hp, equip);
	//fgetsÌá
	c = fgetc(fp);
	fgets(str, sizeof(str), fp);
	fclose(fp);
}