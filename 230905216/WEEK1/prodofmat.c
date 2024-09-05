#include <stdio.h>

int multiply(int a[10][10],int b[10][10],int m,int n,int x,int y)
{
	int c[10][10];
	
	for(int i=0;i<m;i++)
		for(int j=0;j<y;j++)
		{
			 c[i][j]=0;
			for(int k=0;k<n;k++)
			c[i][j]+=a[i][k]*b[k][j];

			printf("%d",c[i][j]);
		}
}
int main()
{
	int i,j,m,n,x,y;

	printf("enter dimensions of matrices");
	scanf("%d %d %d %d",&m,&n,&x,&y);

	if(n!=x)
		return -1;

int a[10][10],b[10][10];

printf("enter for first matrix");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);

printf("enter for second matrix");
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			scanf("%d",&b[i][j]);

multiply(a,b,m,n,x,y);
return 0;
}
