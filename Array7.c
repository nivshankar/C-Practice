#include<stdio.h>
int main()
{
	int r,col,j,i;
	printf("\n\tEnter array's row size : ");
	scanf("%d",&r);
	printf("\tEnter array's column size : ");
	scanf("%d",&col);
	int a[r][col],b[r][col],c[r][col];
	for(int k=1;k<3;k++)
	{
		if(k==1)
		printf("\n\tEnter array A's Element:\n");
		else
		printf("\n\tEnter array B's Element:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<col;j++)
			{
				if(k==1)
				{
					printf("\ta[%d][%d] : ",i,j);
					scanf("%d",&a[i][j]);
				}
				else
				{
					printf("\tb[%d][%d] : ",i,j);
					scanf("%d",&b[i][j]);
				}
			}
		}
	}
	printf("\n\tArray C is : \n\t");
	for(i=0;i<r;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n\t");
	}
}
/*
Output:

        Enter array's row size : 3
        Enter array's column size : 3

        Enter array A's Element:
        a[0][0] : 1
        a[0][1] : 5
        a[0][2] : 8
        a[1][0] : 3
        a[1][1] : 5
        a[1][2] : 9
        a[2][0] : 3
        a[2][1] : 6
        a[2][2] : 4

        Enter array B's Element:
        b[0][0] : -1
        b[0][1] : 4
        b[0][2] : -6
        b[1][0] : -6
        b[1][1] : 5
        b[1][2] : 7
        b[2][0] : 6
        b[2][1] : 3
        b[2][2] : 8

        Array C is :
        0 9 2
        -3 10 16
        9 9 12

*/