#include <stdio.h>

void REVERSE(int *a,int n)
{
	int *p=a;
	int temp;
	int *q=a+n-1;
	while(p<q)
	{
		temp=*p;
		*p=*q;
		*q=temp;
		p++;q--;
	}
}

int main()
{
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array:\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);

REVERSE(a,n);
	printf("Reversed array is:\n");
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
printf("\n");

return 0;
}

