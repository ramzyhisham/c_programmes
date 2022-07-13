#include<stdio.h>
int main()
{
	int rev,sum=0,n,d;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		rev=(rev*10)+d;
		sum=sum+d;
		n=n/10;
	}
		printf("\nSum = %d\n\n",sum);
		printf("Reverse = %d",rev);
}
