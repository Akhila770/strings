//Write a C program to find last occurrence of a character in a given string

#include<stdio.h>
#define size 100

int main()
{
	int i,len=0;
	char str[size],c,isfound=1,index;
	printf("enter a string:");
	gets(str);
	printf("enter a character to search: ");
	scanf("%c",&c);
	for(i=0;str[i]!='\0';i++)
	{
		len=len+1;
	}
	for(i=len;i>=0;i--)
	{
		if(c!=str[i])
		{
			isfound=0;
		}
		else
		{
			isfound=1;
			index=i+1;
			break;
		}
    }
    if(isfound==1)
    {
    	printf("index of first occurance:%d",index);
	}
	else
	{
		printf("not found");
	}
}

/*   output

enter a string:jayasree
enter a character to search: e
index of first occurance:8

*/
