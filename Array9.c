#include<stdio.h>
int main()
{
	int a[5][5],i,j,sum=0;
	printf("\n\tEnter array's elements :\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("\ta[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j==0||j==4||i==0||i==4)
			{
			printf("%d ",a[i][j]);
			sum=sum+a[i][j];
			}
			else
			printf("  ");
		}
		printf("\n");
	}
	printf("\n\tThe of the boundary elements of an array is: %d",sum);
}
/*
Output:

        Enter array's elements :
        a[0][0] = 2
        a[0][1] = 4
        a[0][2] = 1
        a[0][3] = 6
        a[0][4] = 3
        a[1][0] = 9
        a[1][1] = 5
        a[1][2] = 4
        a[1][3] = 6
        a[1][4] = 7
        a[2][0] = 8
        a[2][1] = 2
        a[2][2] = 6
        a[2][3] = 3
        a[2][4] = 5
        a[3][0] = 3
        a[3][1] = 4
        a[3][2] = 8
        a[3][3] = 5
        a[3][4] = 1
        a[4][0] = 2
        a[4][1] = 3
        a[4][2] = 9
        a[4][3] = 5
        a[4][4] = 7

2 4 1 6 3
9       7
8       5
3       1
2 3 9 5 7

        The of the boundary elements of an array is: 75
*/