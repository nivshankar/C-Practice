#include<stdio.h>
int main()
{
	int num1,num2,num3,max;
	printf("Enter three Numbers: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	max=num1*(num1>num2&&num1>num3)+num2*(num1<num2&&num2>num3)+num3*(num3>num2&&num1<num3);
	printf("The maximum number is: %d",max);
}