#include<stdio.h>
int main()
{
	int n,i,j,sum=0;
	printf("\n\tEnter the order of square matrix: ");
	scanf("%d",&n);
	int a[n][n];
	printf("\n\tEnter array's elements: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\ta[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			if((i+j)==(n-1))
			sum=sum+a[i][j];	
		}	
	}	
	printf("\n\tThe sum of the diagonal elements is : %d",sum);
}
/*
Output:

        Enter the order of square matrix: 3

        Enter array's elements:
        a[0][0] : 2
        a[0][1] : 4
        a[0][2] : 6
        a[1][0] : 8
        a[1][1] : 9
        a[1][2] : 5
        a[2][0] : 7
        a[2][1] : 3
        a[2][2] : 1

        The sum of the diagonal elements is : 22
*/