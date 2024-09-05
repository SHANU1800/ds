#include <stdio.h>
#include <string.h>

void ISPALIN(char str[10],int first,int last)
{

	if(first>=last)
	{
		printf("Is a palindrome\n");
		return;
	}

if(str[first]!=str[last])
     {
	     printf("Not a palindrome\n");
	     return;
     }

ISPALIN(str,first+1,last-1);
}

int main(){
	char str[10];
	printf("Enter a string\n");
	scanf("%s",str);
	int l=strlen(str);

	ISPALIN(str,0,l-1);
 return 0;
}
