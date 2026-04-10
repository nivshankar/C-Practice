#include<stdio.h>
int main()
{//fibonacci series
	int a=0,b=1,c,i=1,n;
	printf("Enter any number:\n");
	scanf("%d",&n);
	printf("\n%d %d ",a,b);
	do
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		i++;
	}while(i<=n-2);
}
/*
Output:
Enter any number:
19

0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 
*/