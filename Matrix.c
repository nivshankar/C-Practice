#include<stdio.h>
int main()
{
	int n,i,j;
	printf("\tEnter Order of the matrix:\n\t");
	scanf("%d",&n);
	int arr[n][n],diagonal=0,upper=0,lower=0;
	printf("\tEnter the element for index no.:\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
			if(i==j)
			diagonal=diagonal+arr[i][j];
			else if(j>i)
			upper=upper+arr[i][j];
			else
			lower=lower+arr[i][j];
		}
	}
	printf("\n\n\tThe Matrix is :\n\n\t");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
			
		}
		printf("\n\t");
	}
	printf("\n\tThe sum of Diagonal element is: %d",diagonal);
	printf("\n\tThe sum of Upper Triangle element is: %d",upper);
	printf("\n\tThe sum of Lower Triangle element is: %d",lower);
}
/*
Output:
        Enter Order of the matrix:
        3
        Enter the element for index no.:

        [0][0]: 1
        [0][1]: 2
        [0][2]: 3
        [1][0]: 4
        [1][1]: 5
        [1][2]: 6
        [2][0]: 7
        [2][1]: 8
        [2][2]: 9


        The Matrix is :

        1 2 3
        4 5 6
        7 8 9

        The sum of Diagonal element is: 15
        The sum of Upper Triangle element is: 11
        The sum of Lower Triangle element is: 19
*/