#include<stdio.h>
int main()
{
	float a,b,div;
	int sum,sub,mult;
	printf("Enter 2 numbers for doing operatios on  them:\n");
	scanf("%f%f",&a,&b);
	mult=(int)(a)*(int)(b);//explicit type conversion
	sum=(int)(a)+(int)(b);//explicit type conversion
	sub=(int)(a)-(int)(b);//explicit type conversion
	div=a/b;
	printf("Addition= %d\n",sum);
	printf("Substraction= %d\n",sub);
	printf("Multiplication= %d\n",mult);
	printf("Divison= %.2f\n",div);
}