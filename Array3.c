#include<stdio.h>
int main()
{
	int arr[10],sum=0,i;
	printf("Enter 10 values for array:\n");
	for(i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);
	
	}
	printf("Odd numbers are:\n");
	for(i=0;i<10;i++)
	{
		if(arr[i]%2!=0)
	{
	printf("%d ",arr[i]);
	sum=sum+arr[i];	
	}	
	}
	printf("\n\nsum of even numbers is: %d",sum);

}
/*
Output:
Enter 10 values for array:
1
2
3
4
5
6
4
44
55
67
Odd numbers are:
1 3 5 55 67

sum of even numbers is: 131
*/