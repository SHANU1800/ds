#include <stdio.h>
void SSORT(int a[100],int n,int idx)
		{
			if(idx>=n-1)
				return;

	int min=idx;
	for(int i=idx+1;i<n;i++)
	{
	if(a[i]<a[min])
	{
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		SSORT(a,n,idx);
	}}

	SSORT(a,n,idx+1);
		}

int main(){
	printf("Enter array size\n");
	int n;
	scanf("%d",&n);
	int a[n];
printf("Enter values\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	SSORT(a,n,0);
	printf("SORTED ARRAY IS\n");
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
return 0;
}

