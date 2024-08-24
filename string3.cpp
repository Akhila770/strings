//Write a C program to toggle case of each character of a string.
#include<stdio.h>
#define size 100
int main()
{
	int i;
	char str[size];
	printf("enter a string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	}
	printf("result string:%s",str);
}


/*     output
enter a string:ApPlLe
result string:aPpLlE
*/
