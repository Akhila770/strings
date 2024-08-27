//Write a C program to find first occurrence of a character in a given string.

#include<stdio.h>
#define size 100

int main()
{
	int i;
	char str[size],c,isfound=1,index;
	printf("enter a string:");
	gets(str);
	printf("enter a character to search: ");
	scanf("%c",&c);
	for(i=0;str[i]!='\0';i++)
	{
		if(c==str[i])
		{
			isfound=0;
			index=i+1;
			break;
		}
    }
    if(isfound==0)
    {
    	printf("found\n");
    	printf("index of first occurance:%d",index);
	}
	else
	{
		printf("not found");
	}
}

/*   output

enter a string:varshitha
enter a character to search: t
found
index of first occurance:7

*/
