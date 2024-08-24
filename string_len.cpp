//Write a C program to find length of a string
#include<stdio.h>
int main()
{
	int size,i,j,len=0;
	printf("enter size of the string: ");
	scanf("%d",&size);
	char string[size];
	printf("enter a string:");
	scanf("%s",&string);
	for(i=0;string[i]!='\0';i++)
	{
		len=len+1;
	}
	printf("lenght of string:%d",len);
}

/*     output
enter size of the string: 100
enter a string:Ajay
lenght of string:4
*/

