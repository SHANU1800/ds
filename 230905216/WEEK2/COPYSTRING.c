#include<stdio.h>

void CPY(char a[100],char b[100],int idx)
{
	if(a[idx]=='\0')
	{
		b[idx]='\0';
		return;
	}

       b[idx]=a[idx];
       CPY(a,b,idx+1);
}


int main(){
	printf("Enter string 1\n");
	char a[100],b[100];
	scanf("%s",a);
	printf("copying string 1 to string 2\n");
	CPY(a,b,0);

	printf("%s",b);
}




