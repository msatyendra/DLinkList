#include"myHeader.h"
int main()
{
	int choice;
	struct Employee *head=NULL;
	head=Sync(head);

	while(1)
	{
		printf("\n\t\t*****Menu*****\n\t\t______________\n");
		printf("1. Add_beg'n\t2. Add_last\t3. Add_sort\n4. Print\t5. Reverse_Pr\t6. Del_first\n7. Del_last\t8. Del_data\t9. Rev_list\n10. Exit\t11. Save_File\n");
		printf("Enter Your Choice:");
		scanf("%d",&choice);
		__fpurge(stdin);

		switch(choice)
		{
			case 1:head=Add_beginning(head);
				break;
			case 2:head=Add_last(head);
				break;
			case 3:head=Add_sort(head);
				break;
			case 4:Display(head);
				break;
			case 5:Rev_display(head);
				break;
			case 6:head=Del_beginning(head);
				break;
			case 7:head=Del_last(head);
				break;
			case 8:head=Del_data(head);
				break;
			case 9:head=Reverse(head);
			       break;
			case 10:exit(0);
			case 11:Save(head);
				break;
			default:printf("*****ERROR*****\tInvalid Choice.\n");
		}
	}
}
