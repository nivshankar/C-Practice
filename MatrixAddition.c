#include<stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3],tot[3][3];
	int i,j,k;
	for(k=1;k<=2;k++)
	{	
		if(k==1)
		printf("\n Enter elements for Array 1\n ");
		else
		printf("\n Enter elements for Array 2\n ");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("Enter element for index no. [%d][%d]: ",i,j);
				if(k==1)
				scanf("%d",&arr1[i][j]);
				else
				scanf("%d",&arr2[i][j]);
				tot[i][j]=arr1[i][j]+arr2[i][j];
			}
		
		}
	}
	printf("\n\n\n\n");
	for(i=0;i<3;i++)
		{
			if(i==0||i==2)			
			printf("%d %d %d\t   %d %d %d\t   %d %d %d\n",arr1[i][0],arr1[i][1],arr1[i][2],arr2[i][0],arr2[i][1],arr2[i][2],tot[i][0],tot[i][1],tot[i][2]);	
			else
			printf("%d %d %d\t+  %d %d %d\t=  %d %d %d\n",arr1[i][0],arr1[i][1],arr1[i][2],arr2[i][0],arr2[i][1],arr2[i][2],tot[i][0],tot[i][1],tot[i][2]);	
		}
}
/*
Output:
Enter element for index no. [0][1]: 7
Enter element for index no. [0][2]: 8
Enter element for index no. [1][0]: 3
Enter element for index no. [1][1]: 4
Enter element for index no. [1][2]: 52
Enter element for index no. [2][0]: 1
Enter element for index no. [2][1]: 9
Enter element for index no. [2][2]: 7

 Enter elements for Array 2
 Enter element for index no. [0][0]: 1
Enter element for index no. [0][1]: 2
Enter element for index no. [0][2]: 5
Enter element for index no. [1][0]: 7
Enter element for index no. [1][1]: 4
Enter element for index no. [1][2]: 3
Enter element for index no. [2][0]: 9
Enter element for index no. [2][1]: 6
Enter element for index no. [2][2]: 7




5 7 8      1 2 5           6 9 13
3 4 52  +  7 4 3        =  10 8 55
1 9 7      9 6 7           10 15 14

*/