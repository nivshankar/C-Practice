#include<stdio.h>
int main()
{
	int arr[10],sum=0,i;
	printf("Enter 10 values for array:\n");
	for(i=0;i<10;i++)
	{
	scanf("%d",&arr[i]);
	if(arr[i]%2==0)
	sum=sum+arr[i];	
	}
	printf("The sum of even numbers is: %d",sum);

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
7
8
9
10
The sum of even numbers is: 30
*/