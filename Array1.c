#include<stdio.h>
int main()
{
	int a[5],b[5],i;
	printf("Enter 5 elements of A:\n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("Enter 5 elements of B:\n");
	for(i=0;i<5;i++)
	scanf("%d",&b[i]);
	printf("\n\nA		B		Sum");
	printf("\n-----------------------------------\n");
	for(i=0;i<5;i++)
	{
		printf("\n%d		%d		%d",a[i],b[i],a[i]+b[i]);
	}
	
}
/*
Output:
Enter 5 elements of A:
48
37
49
100
89
Enter 5 elements of B:
46
58
42
360
578


A               B               Sum
-----------------------------------

48              46              94
37              58              95
49              42              91
100             360             460
89              578             667
*/