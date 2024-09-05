#include <stdlib.h>
#include <stdio.h>

typedef struct
{
	int day,year,*month;
}DOB;

typedef struct
{
	int regno;
	char address[100],*name;

}info ;

typedef struct{
	char uniname[100],*collegename;
}COLLEGE;

typedef struct
{
	DOB *dob;
	info stu_info;
	COLLEGE college;
}STUDENT;

void readDOB(DOB *dob)
{
	printf("Enter day:");
	scanf("%d",&dob->day);
	printf("Enter month:");
	scanf("%d",dob->month=(int*)malloc(sizeof(int)));
printf("Enter year:");
	scanf("%d",&dob->year);

}

void readCOLLEGE(COLLEGE* college)
{
	printf("Enter college name:");
	college->collegename=(char*)malloc(100*sizeof(char));
	scanf("%s",college->collegename);	
	printf("Enter university name:");
	scanf("%s",college->uniname);	
}

void readinfo(info* stu_info)
{
	printf("Enter registration number:");
	scanf("%d",&stu_info->regno);
	printf("Enter name:");

	stu_info->name=(char*)malloc(100*sizeof(char));
	scanf("%s",stu_info->name);
	printf("Enter address:");
	scanf("%s",stu_info->address);
}

void readSTUDENT(STUDENT*student)
{
	readDOB(student->dob);
	readinfo(&student->stu_info);
readCOLLEGE(&student->college);
}

void displayDOB(DOB* dob)
{
	printf("Date of Birth:%d-%d-%d\n",dob->day,*dob->month,dob->year);
}

void displayinfo(info *stu_info)
{
	printf("Registration number:%d\n",stu_info->regno);
	printf("Name:%s\n",stu_info->name);
	printf("Address:%s\n",stu_info->address);
}

void displayCOLLEGE(COLLEGE* college)
{
	printf("College name:%s\n",college->collegename);
	printf("University name:%s\n",college->uniname);
}

void displaySTUDENT(STUDENT*student)
{
	displayinfo(&student->stu_info);
	displayDOB(student->dob);
    displayCOLLEGE(&student->college);
}

int main()
{
	STUDENT *student=(STUDENT*)malloc(sizeof(STUDENT));
	student->dob=(DOB*)malloc(sizeof(DOB));
	readSTUDENT(student);

	printf("\n Student Information:\n");
	displaySTUDENT(student);
	
}