//Write a C program to remove first occurrence of a character from string.

#include<stdio.h>
#define size 100

int main()
{
	int i;
	char str[size],c;
	printf("enter a string:");
	gets(str);
	printf("enter a character to search: ");
	scanf("%c",&c);
	int flag=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(c==str[i] && flag==0)
		{	
			flag=1;
			continue;
		}
		printf("%c",str[i]);
    }
}
