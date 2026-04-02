#include<stdio.h>
int main()
{
	int x,y,ans;
	printf("Enter x:\n");
	scanf("%d",&x);
	printf("Enter y:\n");
	scanf("%d",&y);
	ans=x*x+y*y+2*x*y;
	printf("\nThe answer of (x+y)^2 is : %d",ans);
}
/*
Output:
Enter x:
5
Enter y:
7

The answer of (x+y)^2 is : 144
*/