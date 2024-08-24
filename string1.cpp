//Write a C program to convert lowercase string to uppercase.

#include<stdio.h>
#define MAX_SIZE 50
int main()
{
	char str[MAX_SIZE],i;
	printf("enter a string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
		str[i]=str[i]-32;
    	}
	}
	printf("\nafter converting lowercase string to uppercase:%s",str);
}

/*
output
enter a string:chaIthU

after converting lowercase string to uppercase:CHAITHU

*/
