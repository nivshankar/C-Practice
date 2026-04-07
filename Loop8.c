#include<stdio.h>
int main()
{//for loop
	int i,n,a=1,b,c=0;
	printf("Enter n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		b=a+c;
		if(i==1)
		printf("%d ",b);
		printf("%d ",b);
		c=a;
		a=b;
	}	
}
/*
Output:
Enter n:
9
1 1 2 3 5 8 13 21 34 55
*/
