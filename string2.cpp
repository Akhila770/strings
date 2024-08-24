//Write a C program to convert uppercase string to lowercase.
#include<stdio.h>
#define MAX_SIZE 50
int main()
{
	char str[MAX_SIZE],i;
	printf("enter a string:");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
		str[i]=str[i]+32;
    	}
	}
	printf("\nafter converting uppercase string to lowercase:%s",str);
}

/*
output
enter a string:cHAIthU

after converting luppercase string to lowercase:chaithu

*/
