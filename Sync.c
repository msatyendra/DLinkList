#include"myHeader.h"
struct Employee *Sync(struct Employee *ptr)
{
	FILE *fp;
	struct Employee *newnode=NULL,*temp=NULL;
	struct Employee var;
	fp=fopen("Emdb.txt","r");
	if(fp==NULL)
	{
		return ptr;
	}

	while(fread(&var,sizeof(struct Employee)-(2*sizeof(struct Employee *)),1,fp)==1)
	{
		newnode=(struct Employee *)calloc(1,sizeof(struct Employee));
		if(newnode==NULL)
		{
			printf("*****ERROR*****\tMemory not Allocated.\n");
		}
		else
		{
			newnode->id=var.id;
			strcpy(newnode->name,var.name);
			newnode->sal=var.sal;

			if(ptr==NULL)
			{
				ptr=newnode;
			}
			else
			{
				for(temp=ptr;temp->next!=NULL;temp=temp->next);
				temp->next=newnode;
				newnode->prev=temp;
			}
		}
	}
	fclose(fp);
	return ptr;
}
