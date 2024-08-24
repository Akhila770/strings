//Write a C program to find total number of alphabets, digits or special character in a string
#include<stdio.h>
#define size 100
int main()
{
	int i,a=0,d=0,s=0;
	char str[size];
	printf("enter a string:");
	scanf("%s",&str);
	for(i=0;str[i]!=0;i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			a=a+1;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			d=d+1;
		}
		else
		{
			s=s+1;
		}
	}
	printf("total no.of alphabets in a string:%d\n",a);
	printf("total no.of digits in a string:%d\n",d);
	printf("total no.of special characters in a string:%d",s);
}

/*    output
enter a string:231akhila#@
total no.of alphabets in a string:6
total no.of digits in a string:3
total no.of special characters in a string:2

*/
