#include<stdio.h>
int main()
{
	int base,height;
	float area;
	printf("Enter base of Triangle:\n");
	scanf("%d",&base);
	printf("Enter height of Triangle:\n");
	scanf("%d",&height);
	area=0.5*base*height;
	printf("The area of the triangle is: %.2f",area);
}
/*
Output:
Enter base of Triangle:
10
Enter height of Triangle:
20
The area of the triangle is: 100.00
*/