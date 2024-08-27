//Write a C program to find highest frequency character in a string

#include<stdio.h>
#define size 100

int main()
{
	int i,j,len=0;
	char str[size];
	char k;
	printf("enter a string:");
	gets(str);
	int dup=0;
	for(i=0;str[i]!='\0';i++)
	{
		int count=0;
	    for(j=0;str[j]!=0;j++)
	    {
	        if(str[i]==str[j])
			{
			    count++;
		    }	
		}
		if(count>dup)
		{
			dup=count;
			k=str[i];
		}
	
	}
			printf("high frequency character is '%c' with frequency %d\n",k,dup);
}

/*     output

enter a string:sleep
high frequency character is 'e' with frequency 2

*/
