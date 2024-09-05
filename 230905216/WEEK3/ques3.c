#include <stdio.h>
#include <stdlib.h>

int *twice(int *ptr)
{
	*ptr=2*(*ptr);
	return ptr;
}

int main()
{
	int value,*ptr,**q;
	printf("Enter a number:");
	scanf("%d",&value);
	ptr=&value;
	q=&ptr;
	ptr=twice(ptr);
	printf("The edited no. is %d\n",*ptr);
	printf("The no. from pointer to pointer is %d\n",**q);
	return 0;
}
