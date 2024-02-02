#include"myHeader.h"
struct Employee *Del_beginning(struct Employee *ptr)
{
	struct Employee *temp=NULL;
	if(ptr==NULL)
	{
		printf("*****ERROR*****\tList is Empty.\n");
		return ptr;
	}
	else
	{
		temp=ptr;
		ptr=ptr->next;
		if(ptr)
			ptr->prev=NULL;
		free(temp);
		temp=NULL;
	}
	return ptr;
}
