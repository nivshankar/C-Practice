#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("\n\tEnter Array size: ");
	scanf("%d",&n);
	int a[n];
	printf("\n\tEnter array elements : \n");
	for(int i=0;i<n;i++)
	{
		printf("\ta[%d] :",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	float avg=(float)(sum)/(float)(n);
	printf("\n\tAverage of the array is : %.2f",avg);
}
/*
Output:

        Enter Array size: 6

        Enter array elements :
        a[0] :1
        a[1] :2
        a[2] :3
        a[3] :4
        a[4] :5
        a[5] :6

        Average of the array is : 3.50

*/