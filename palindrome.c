#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],str1[20];
	printf("Enter the string: ");
	gets(str);
	strcpy(str1,str);
	strrev(str1);
	if(strcmp(str,str1)==0)
	{
		printf("\nEntered string is pallindrome");
	}
	else
	{
		printf("\nEntered string is not pallindrome");
	}
	printf("\n\nReverse of given string: %s",str1);
}
