#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the order of square matrix:\n");
	scanf("%d",&n);
	int arr[n][n],arr1[n][n];
	printf("Enter element for index no:\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
		arr1[j][i]=arr[i][j];
		}
	}
	
	printf("\n\nOriginal Matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
			
		}
		printf("\n");
	}
	printf("\n\nTranspose matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr1[i][j]);
			
		}
		printf("\n");
	}
}
/*
Output:
Enter the order of square matrix:
3
Enter element for index no:

[0][0] : 1
[0][1] : 2
[0][2] : 3
[1][0] : 4
[1][1] : 5
[1][2] : 6
[2][0] : 7
[2][1] : 8
[2][2] : 9


Original Matrix:
1 2 3
4 5 6
7 8 9


Transpose matrix:
1 4 7
2 5 8
3 6 9

*/