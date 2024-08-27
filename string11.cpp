//Write a C program to search all occurrences of a character in given string.
//Write a C program to count occurrences of a character in given string.

#include<stdio.h>
#define size 100

int main()
{
	int i,len=0,count=0;
	char str[size],c;
	printf("enter a string:");
	gets(str);
	printf("enter a character to search: ");
	scanf("%c",&c);
	printf("%c is found at index:",c);
	for(i=0;str[i]!='\0';i++)
	{
		if(c==str[i])
		{
			printf("%d, ",i+1);
			count++;
		}
	}
	printf("\ncount occurrences of a character in given string:%d",count);
}

/*   output

enter a string:sudheestana
enter a character to search: a
a is found at index:9, 11,
count occurrences of a character in given string:2

*/
