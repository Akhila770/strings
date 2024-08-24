//Write a C program to compare two strings.
#include<stdio.h>
int main()
{
	int size1,size2,i=0,iscompare=1;
	printf("enter size of the string1: ");
	scanf("%d",&size1);
	printf("enter size of the string2: ");
	scanf("%d",&size2);
	char string1[size1],string2[size2],string3;
	printf("enter a string1:");
	scanf("%s",&string1);
	printf("enter a string2:");
	scanf("%s",&string2);
	while(string1[i]!='\0' || string2[i]!='\0')
	{
		if(string1[i]-string2[i]!=0)
		{
			iscompare=0;
		}
		i++;
	}
	if(iscompare==1)
	{
		printf("both stings are same.");
	}
	else
	{
		printf("both strings are not same");
	}
}
/*    output
enter size of the string1: 10
enter size of the string2: 10
enter a string1:mango
enter a string2:mango
both stings are same.



--------------------------------------------------

output 2
enter size of the string1: 10
enter size of the string2: 10
enter a string1:mango
enter a string2:Mango
both strings are not same
*/
