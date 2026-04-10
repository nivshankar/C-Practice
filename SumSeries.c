#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter a number upto which addition will be done:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;	
	}
	printf("\nThe sum upto n numbers is: %d",sum);
}
/*
Output:
Enter a number upto which addition will be done:
10

The sum upto n numbers is: 55
*/