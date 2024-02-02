#include"myHeader.h"
struct Employee *Add_beginning(struct Employee *ptr)
{
	struct Employee *newnode=NULL;

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

	newnode->next=ptr;
	if(ptr)
		ptr->prev=newnode;
	ptr=newnode;
	return ptr;
}
