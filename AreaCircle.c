#include<stdio.h>
#define PI 3.14
int main()
{
	int radius;
	float area;
	printf("Enter radius:");
	scanf("%d",&radius);
	area=PI*radius*radius;
	printf("\nThe area of the Circle is: %.2f",area);
}
/*
Output:
Enter radius:20

The area of the Circle is: 1256.00
*/