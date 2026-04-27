#include<stdio.h>
int main()
{
	int n;
	printf("\n\tEnter array size : ");
	scanf("%d",&n);
	int arr[n];
	printf("\n\tEnter array's elements : \n");
	for(int i=0;i<n;i++)
	{
		printf("\tarr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int *p;
	p = &arr;
	printf("\n\tSquare of each element is : ");
	for(int i=0;i<n;i++)
	{
	printf("%d ,",*(p+i)* *(p+i));	
	}
}
/*
Output:

        Enter array size : 6

        Enter array's elements :
        arr[0] = 2
        arr[1] = 4
        arr[2] = 6
        arr[3] = 64
        arr[4] = 45
        arr[5] = 2

        Square of each element is : 4 ,16 ,36 ,4096 ,2025 ,4 ,
*/