#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter a number:\n");
	scanf("%d",&num);
	if(num==0)
	printf("\nThe number is neutral.");
	else if(num>0)
	printf("\nThe number is positive.");
	else
	printf("\nThe number is negative.");
}
/*
Output:
Enter a number:
-8

The number is negative.
*/