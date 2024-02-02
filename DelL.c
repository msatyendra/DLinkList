#include"myHeader.h"
struct Employee *Del_last(struct Employee *ptr)
{
	struct Employee *temp=NULL;
	if(ptr==NULL)
	{
		printf("*****ERROR*****\tList is Empty.\n");
	}
	else if(ptr->next==NULL)
	{
		free(ptr);
		ptr=NULL;
	}
	else
	{
		for(temp=ptr;temp->next!=NULL;temp=temp->next);
		if(temp->prev)
			temp->prev->next=NULL;
		free(temp);
		temp=NULL;
	}
	return ptr;
}
