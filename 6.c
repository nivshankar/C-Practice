#include<stdio.h>
int main()
{
	int a,b,max;
	printf("Enter Two Numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
	max=a*(a>b)+b*(b>a);
	printf("\nMaximum =%d",max);
	
	
}