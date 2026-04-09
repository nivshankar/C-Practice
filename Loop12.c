#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter any number:\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		if(i%2!=0)
		printf("%d ",i);
	}
}
/*
Output:
Enter any number:
56
55 53 51 49 47 45 43 41 39 37 35 33 31 29 27 25 23 21 19 17 15 13 11 9 7 5 3 1
*/