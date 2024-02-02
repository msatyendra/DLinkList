#include"myHeader.h"
void Save(struct Employee *ptr)
{
	FILE *fp;
	int size;
	size=(sizeof(struct Employee)-(2*sizeof(struct Employee *)));
	if(ptr==NULL)
	{
		printf("*****ERROR*****\tList is Empty.\n");
		return;
	}
	fp=fopen("Emdb.txt","w");
	if(fp==NULL)
	{
		printf("*****ERROR*****\tFile not Created.\n");
		return;
	}
	else
	{
		while(ptr)
		{
			fwrite(ptr,size,1,fp);
			ptr=ptr->next;
		}
	}
	fclose(fp);
}
