#include <stdio.h>
void TOH(int n,char A,char B,char C)
{
   if(n==1)
   {
	   printf("Move disc 1 from %c to %c\n",A,B);
           return;
   }
    TOH(n-1,A,C,B);

    printf("Move disc %d from %c to %c\n",n,A,B);
    TOH(n-1,C,B,A);
}

int main(){
   
	int n;
	printf("Enter number of discs\n");
	scanf("%d",&n);
	TOH(n,'A','B','T');
	return 0;
}
