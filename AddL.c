#include"myHeader.h"
struct Employee *Add_last(struct Employee *ptr)
{
	struct Employee *newnode=NULL,*temp=NULL;

	newnode=(struct Employee *)calloc(1,sizeof(struct Employee));
	if(newnode==NULL)
	{
		printf("*****ERROR*****\tMemory not allocated.\n");
		return ptr;
	}

	printf("Enter Employee's ID:");
	scanf("%d",&newnode->id);
	__fpurge(stdin);
	printf("Enter Employee's Name:");
	scanf("%s",newnode->name);
	__fpurge(stdin);
	printf("Enter Employee's Salary:");
	scanf("%f",&newnode->sal);
	__fpurge(stdin);
	
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
	return ptr;
}
