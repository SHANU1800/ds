#include <stdio.h>

int main()
{
int n;
printf("enter total elements\n");

scanf("%d",&n);
int arr[n];
int i;
printf("enter values\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

int flag=0;


for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
		for(int k=j+1;k<n;k++)
		{
			if(arr[i]+arr[j]+arr[k]==0)
			{
				flag=1;
				printf("%d, %d, %d\n",arr[i],arr[j],arr[k]);
			}
		}
	}
}
if(flag==0)
	printf("not found");
}
