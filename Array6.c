#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("\n\tEnter array's row size : ");
	scanf("%d",&r);
	printf("\tEnter array's column size : ");
	scanf("%d",&c);
	int a[r][c],sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\ta[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n");
	}
	float avg;
	avg=(float)sum/(float)(r*c);
	printf("\n\tAverage of th array is: %.2f",avg);
}
/*
Output:

        Enter array's row size : 3
        Enter array's column size : 3
        a[0][0] : 1
        a[0][1] : 2
        a[0][2] : 3

        a[1][0] : 4
        a[1][1] : 5
        a[1][2] : 6

        a[2][0] : 7
        a[2][1] : 8
        a[2][2] : 9


        Average of th array is: 5.00
*/