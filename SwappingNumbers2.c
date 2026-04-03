#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	a=b+a;
	b=a-b;
	a=a-b;
	printf("After swapping a= %d,b= %d",a,b);
}
/*
Output:
Enter a: 25
Enter b: 47
After swapping a= 47,b= 25
*/