#include<stdio.h>
int main()
{
	int x,y,ans;
	printf("Enter x:\n");
	scanf("%d",&x);
	printf("Enter y:\n");
	scanf("%d",&y);
	ans=x*x+y*y-2*x*y;
	printf("The answer of(x-y)^2 is: %d",ans);
}
/*
Output:
Enter x:
7
Enter y:
9
The answer of(x-y)^2 is: 4
*/