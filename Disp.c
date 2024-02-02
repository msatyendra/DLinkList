#include"myHeader.h"
void Display(struct Employee *ptr)
{
	if(ptr==NULL)
	{
		printf("*****ERROR*****\tList is Empty.\n");
		return;
	}
	while(ptr)
	{
		printf("Emp-%3d:%-20s\t%0.2f\n",ptr->id,ptr->name,ptr->sal);
		ptr=ptr->next;
	}
}
