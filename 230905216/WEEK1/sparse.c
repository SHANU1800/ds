#include<stdio.h>

void sparse(int a[][100],int m,int n)
{
	int count=0;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	{
		if(a[i][j]==0)
		       count++;	
	}

	if(count>(m*n/2))
			printf("sparse matrix\n");
	else
		printf("not sparse matrix\n");

}


int main()
{ int m,n;
printf("enter dimensions of matrix\n");
scanf("%d %d",&m,&n);

int arr[m][n];
printf("enter elements\n");
for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
		scanf("%d",&arr[i][j]);


sparse(arr,m,n);			
				
return 0;
				
}




