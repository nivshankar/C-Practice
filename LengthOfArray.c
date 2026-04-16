#include<stdio.h>
int main()
{
	int i,n;
	printf("\tEnter no of elements:\n\t");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("\ta[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("Length of an array is: %d",n);
}
/*
Output:
        Enter no of elements:
        10
        a[0]: 1
        a[1]: 2
        a[2]: 4
        a[3]: 5
        a[4]: 7
        a[5]: 4
        a[6]: 7
        a[7]: 4
        a[8]: 8
        a[9]: 3
Length of an array is: 10
*/