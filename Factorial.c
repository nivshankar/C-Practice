#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("Enter any number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact=fact*i;
	printf("It's factorial is: %d",fact);
}
/*
Output:
Enter any number:
6
It's factorial is: 720
*/