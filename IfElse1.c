#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
	scanf("%d",&b);
	if(a>b)
	printf("Minimum value is: %d",b);
	else
	printf("Minimum value is: %d",a);
}
/*
Output:
Enter a:
45
Enter b:
98
Minimum value is: 45
*/