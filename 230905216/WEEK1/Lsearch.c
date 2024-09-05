#include<stdio.h>
int Lsearch(int arr[],int size,int key)
{
	for(int i=0;i<size;i++)
		if(arr[i]==key)
			return i;

	return -1;
}

int main()
{
	
	
	printf("enter total values\n");
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("enter values\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("enter key\n");
	int key;
	scanf("%d",&key);



int pos=Lsearch(arr,n,key);
printf("THE VALUE %d IS AT INDEX %d\n",key,pos);


return 0;
}
