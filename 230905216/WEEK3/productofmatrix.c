#include <stdio.h>
#include <stdlib.h>

void read(int ** matrix,int rows,int cols)
{
	for(int i=0;i<rows;i++)
		for(int j=0;j<cols;j++)
		{
			printf("Enter element[%d][%d]:",i,j);
			scanf("%d",*(matrix+i)+j);
		}
}

void display(int **matrix,int rows,int cols)
{
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d\t",*(*(matrix+i)+j));
		}
		printf("\n");
	}
}

int **multiply(int m,int n,int **matrix1,int p,int q,int **matrix2)
{
	int **result=(int **)malloc(m*sizeof(int *));

for(int i=0;i<m;i++){
	result[i]=(int *)calloc(q,sizeof(int));

	for(int j=0;j<q;j++)
	{
		*(*(result+i)+j)=0;
		for(int k=0;k<n;k++)
			*(*(result+i)+j)=*(*(matrix1+i)+k)**(*(matrix2+k)+j);

	}
}
return result;
}


int main()
{
	int m,n,p,q;
	printf("Enter dimensions:");
	scanf("%d %d %d %d",&m,&n,&p,&q);

	
	int **a=(int **)malloc(m*sizeof(int *));
	int **b=(int **)malloc(p*sizeof(int *));
          if(a==NULL || b==NULL)
	  {
		  printf("Memory allocation failed");
		  return -1;
	  }

	  for(int i=0;i<m;i++)
	  a[i]=(int *)malloc(n*sizeof(int));
	  for(int i=0;i<p;i++)
		  b[i]=(int *)malloc(q*sizeof(int));

	 printf("Enter matrix1 elements\n");
	 read(a,m,n);
	 printf("Enter matrix2 elements\n");
	 read(b,p,q);

	 printf("Matrix1:\n");
	 display(a,m,n);
	 printf("Matrix2:\n");
	 display(b,p,q);

	 int **final=multiply(m,n,a,p,q,b);
	 printf("\nResult:\n");
	 display(final,m,q);
	 printf("\n");
	 return 0;
}
        

