#include"myHeader.h"
struct Employee *Reverse(struct Employee *ptr)
{
	struct Employee *temp1=NULL,*temp2=NULL;
	if((ptr==NULL)||(ptr->next==NULL))
		return ptr;
	temp1=ptr;
	while(temp1)
	{/*Swaping prev and next node of current node*/
		temp2=temp1->prev;
		temp1->prev=temp1->next;
		temp1->next=temp2;

		temp1=temp1->prev;//traversing to next node
	}
	ptr=temp2->prev;
	return ptr;
}
