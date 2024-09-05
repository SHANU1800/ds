#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
	int day,month,year;
}Date;

typedef struct{
	int houseno,zipcode;
	char state[50];}Address;

	typedef struct{
		char name[50];
		Date date;
		Address address;
	}Employee;

	void read(Employee *e,int n)
	{
for(int i=0;i<n;i++)
{
	printf("\nEnter name:");
	scanf("%s",(e+i)->name);

printf("\nEnter day of DOB:");
	scanf("%d",&((e+i)->date.day));

	printf("\nEnter month of DOB:");
	scanf("%d",&((e+i)->date.month));

	printf("\nEnter year of DOB:");
	scanf("%d",&((e+i)->date.year));

printf("\nEnter house number:");
	scanf("%d",&((e+i)->address.houseno));
	
printf("\nEnter zip code:");
	scanf("%d",&((e+i)->address.zipcode));

	printf("Enter state:");
	scanf("%s",&((e+i)->address.state));
	}}


void display(Employee*e,int n)
{
	for(int i=0;i<n;i++)
{
	printf("\nDetails of employee number %d:\n",i+1);

printf("\nName of employee:%s",(e+i)->name);
printf("\nDOB:%d:%d:%d",(e+i)->date.day,(e+i)->date.month,(e+i)->date.year);
printf("\nADDRESS:");
printf("House no.:%d,zip code:%d,state:%s\n",(e+i)->address.houseno,(e+i)->address.zipcode,(e+i)->address.state);
}
}

int main()
{
	int n;
	printf("\nEnter number of employees:");
	scanf("%d",&n);
	Employee *e;
	e=(Employee*)malloc(n*sizeof(Employee*));
	read(e,n);
	display(e,n);
	return 0;
}