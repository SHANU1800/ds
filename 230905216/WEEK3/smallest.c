#include <stdio.h>
#include <stdlib.h>
int SMALLEST(int *a,int n)
{
	int *p=a;
	int smallest=*p;
	for(int i=0;i<n;i++)
	{
	
		if(smallest>*(p+i))
		smallest=*(p+i);
	}
		return smallest;
}

int main()
{
	int n;
	printf("Enter total elemnts:\n");
	scanf("%d",&n);
        int *a=(int*)malloc(n*sizeof(int));

	if(a==NULL)
	{
		printf("Memory allocation failed");
	return 0;
}
	printf("Enter elements:\n");
	for(int i=0;i<n;i++)
		scanf("%d",a+i);
    int small=SMALLEST(a,n);
printf("SMALLEST ELEMENT IS:%d\n",small);
free(a);
return 0;
}
