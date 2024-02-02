#include"myHeader.h"
void Rev_display(struct Employee *ptr)
{
	struct Employee *temp=NULL;
	if(ptr==NULL)
	{
		printf("*****ERROR*****\tList is Empty.\n");
		return;
	}
	for(temp=ptr;temp->next!=NULL;temp=temp->next);
	while(temp)
	{
		printf("Emp-%3d\t%-20s\t%0.2f\n",temp->id,temp->name,temp->sal);
		temp=temp->prev;
	}
}
