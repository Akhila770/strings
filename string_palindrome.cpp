//Write a C program to check whether a string is palindrome or not

#include<stdio.h>
#define size 100

int main()
{
	int i,len=0;
	char str[size],rev[size];
	printf("enter a string:");
	gets(str);
	//length of string
	for(i=0;str[i]!='\0';i++)
	{
		len=len+1;
	}	
	printf("length of string:%d\n",len);
	//reverse of string
	for(i=len-1;i>=0;i--)
	{
		rev[len-1-i]=str[i];
	}
	rev[len]='\0';
	printf("reverse of string:%s\n",rev);
	int j=0,ispalindrome=1;
	while(str[j]!='\0' && rev[j]!='\0')
	{
		if(str[j]-rev[j]!=0)
		{
			ispalindrome=0;
		}
		j++;
	}
	if(ispalindrome==1)
	{
		printf("string is palindrome.");
	}
	else
	printf("string is not palindrome");
}

/*   output

enter a string:dad
length of string:3
reverse of string:dad
string is palindrome.

*/
