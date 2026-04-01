#include<stdio.h>
#define PI 3.14
int main()
{
	int radius;
	float perimeter;
	printf("Enter the radius of Circle:\n");
	scanf("%d",&radius);
	perimeter=2*PI*radius;
	printf("Ther perimeter pof the circle is: %.2f",perimeter);	
}
/*
Output:
Enter the radius of Circle:
10
Ther perimeter pof the circle is: 62.80
*/