//Write a C program to find reverse of a string
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
	printf("reverse of string:%s",rev);
}
