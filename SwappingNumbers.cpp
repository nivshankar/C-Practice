#include<stdio.h>
int main()
{//swapping of numbers with third variable
	int a,b,c;
	printf("Enter a: \n");
	scanf("%d",&a);
	printf("Enter b: \n");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter swapping a= %d ,b= %d",a,b);
}
/*
Output:
Enter a:
9
Enter b:
28

After swapping a= 28 ,b= 9
*/