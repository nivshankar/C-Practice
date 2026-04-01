#include<stdio.h>
int main()
{
	float principal,rate,time,SI;
	printf("Enter Principal Amount: \n");
	scanf("%f",&principal);
	printf("Enter Rate of Interest: \n");
	scanf("%f",&rate);
	printf("Enter time in months: \n");
	scanf("%f",&time);
	SI=(principal*rate*time)/100;
	printf("The Simple Interest on it is: %.2f",SI);
}
/*
Output:
Enter Principal Amount:
326737
Enter Rate of Interest:
7
Enter time in months:
19
The Simple Interest on it is: 434560.19
*/