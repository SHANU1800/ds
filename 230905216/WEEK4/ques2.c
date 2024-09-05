#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char name[50];
	int roll;
	double cgpa;
}student;

void read(student *std,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter name:");
		scanf("%s",(std+i)->name);
		printf("Enter roll:");
		scanf("%d",&(std+i)->roll);
        printf("Enter cgpa:");
		scanf("%lf",&(std+i)->cgpa);

	}
}


void display(student *std,int n)
{
	
	for(int i=0;i<n;i++)
	{
		printf("\nStudent %d",i+1);
printf("\nNAME:%s",(std+i)->name);
printf("\nROLL:%d",(std+i)->roll);
printf("\ncgpa:%lf",(std+i)->cgpa);

	}

}

void sort(student*std,int n)
{
	student temp;
	for(int i=0;i<n-1;i++)
	for(int j=i+1;i<n;j++)
	{
		if(std[i].roll>std[j].roll)
		{
			temp=std[i];
			std[i]=std[j];
			std[j]=temp;
		}
	}

}

int main()
{
	int i,n;
	printf("Enter total number of students:");
	scanf("%d",&n);
	student *std;
	std=(student*)malloc(n*sizeof(student));

	read(std,n);
	printf("\nDetails of first student are:");
	display(std,1);
	sort(std,n);
	printf("\nDetails of student in sorted order");
	display(std,n);
	return 0;
}
