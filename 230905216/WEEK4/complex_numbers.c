#include<stdio.h>

typedef struct
{
	float real,img;
}complex;

complex add(complex a,complex b)
{
	complex result;
	result.real=a.real+b.real;
	result.img=a.img+b.img;
	return result;
}

complex sub(complex a,complex b)
{
	complex result;
	result.real=a.real-b.real;
	result.img=a.img-b.img;
return result;

}

complex multiply(complex a,complex b)
{
	complex result;
	result.real=a.real*b.real-a.img*b.img;
	result.img=a.real*b.img+b.real*a.img;

	return result;
}

void print(complex c)
{
	printf("\n %f+%fi\n",c.real,c.img);
}

void main()
{
	complex a,b,result;
	char choice;

	do{
	printf("Enter complex number 1:\n");
	printf("REAL PART:");
	scanf("%f",&a.real);
	printf("IMG PART:");
	scanf("%f",&a.img);
	printf("Enter complex number 2:\n");
printf("REAL PART:");
scanf("%f",&b.real);
printf("IMG PART:");
scanf("%f",&b.img);

result=add(a,b);
printf("\nSUM:");
print(result);

result=sub(a,b);
printf("\nDIFFERENCE:");
print(result);

result=multiply(a,b);
printf("\nPRODUCT:");
print(result);
	printf("DO YOU WISH TO CONTINUE?(y/n):");
	scanf("%c",&choice);
	}while(choice=='y' || choice=='Y');
}





