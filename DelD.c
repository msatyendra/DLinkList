#include"myHeader.h"
struct Employee *Del_data(struct Employee *ptr)
{
	struct Employee *temp=NULL;
	int data;
	if(ptr==NULL)
	{
		printf("*****ERROR*****\tList is Empty.\n");
	}
	else
	{
		printf("Enter Employee's ID to Delete:");
		scanf("%d",&data);
		__fpurge(stdin);

		if(data==ptr->id)
		{
			ptr=Del_beginning(ptr);
		}
		else
		{
			temp=ptr->next;
			while(temp && temp->id!=data)
			{
				temp=temp->next;
			}
			if(temp==NULL)
				printf("*****Data not Found*****\n");
			else
			{
				temp->prev->next=temp->next;
				if(temp->next)
					temp->next->prev=temp->prev;

				free(temp);
				temp=NULL;
			}
		}
	}
	return ptr;
}
