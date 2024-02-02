#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>
struct Employee
{
	int id;
	char name[20];
	float sal;
	struct Employee *prev,*next;
};
struct Employee *Add_last(struct Employee *);
struct Employee *Add_beginning(struct Employee *);
struct Employee *Add_sort(struct Employee *);
void Display(struct Employee *);
void Rev_display(struct Employee *);
struct Employee *Del_last(struct Employee *);
struct Employee *Del_beginning(struct Employee *);
struct Employee *Del_data(struct Employee *);
struct Employee *Reverse(struct Employee *);
void Save(struct Employee *);
struct Employee *Sync(struct Employee *);

