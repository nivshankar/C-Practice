#include<stdio.h>
int main()
{
	int x,y,ans;
	printf("Enter x:\n");
	scanf("%d",&x);
	printf("Enter y:\n");
	scanf("%d",&y);
	ans=x*x*x+y*y*y+3*x*x*y+3*x*y*y;
	printf("The answer of(x+y)^3 is: %d",ans);
}
/*
Output:
Enter x:
6
Enter y:
7
The answer of(x+y)^3 is: 2197
*/