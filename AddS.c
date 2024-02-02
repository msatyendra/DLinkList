#include"myHeader.h"
struct Employee *Add_sort(struct Employee *ptr)
{
	struct Employee *newnode=NULL,*temp=NULL,*ptemp=NULL;

	newnode=(struct Employee *)calloc(1,sizeof(struct Employee));
	if(newnode==NULL)
	{
		printf("*****ERROR*****\tMemory not allocated.\n");
	}
	else
	{
		printf("Enter Employee's ID:");
		scanf("%d",&newnode->id);
		__fpurge(stdin);
		printf("Enter Employee's Name:");
		scanf("%s",newnode->name);
		__fpurge(stdin);
		printf("Enter Employee's Salary:");
		scanf("%f",&newnode->sal);
		__fpurge(stdin);

		if((ptr==NULL)||((newnode->id) < (ptr->id)))
		{
			newnode->next=ptr;
			if(ptr)
				ptr->prev=newnode;
			ptr=newnode;
		}
		else
		{
			ptemp=ptr;
			temp=ptr->next;
			while(temp && (temp->id < newnode->id))
			{
				ptemp=ptemp->next;
				temp=temp->next;
			}
			newnode->prev=ptemp;
			ptemp->next=newnode;
			newnode->next=temp;
			if(temp)
				temp->prev=newnode;
		}
	}
	return ptr;
}
