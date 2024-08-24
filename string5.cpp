//Write a C program to count total number of vowels and consonants in a string
#include<stdio.h>
#define size 100
int main()
{
	int i,v=0,c=0;
	char str[size];
	printf("enter string:");
	scanf("%s",&str);
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			v=v+1;
		}
		else
		{
			c=c+1;
		}
	}
	printf("no.of vowels:%d\n",v);
	printf("no.of consonants:%d",c);
}
