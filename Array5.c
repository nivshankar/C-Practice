#include<stdio.h>
int main()
{
	int n,i;
	printf("\n\tEnter the array size: ");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(int j=1;j<3;j++)
	{
		if(j==1)
		printf("\n\tEnter array A's element: \n");
		else if (j==2)
		printf("\n\tEnter array B's element: \n");
		
		for(i=0;i<n;i++)
		{
			if(j==1)
			{
			printf("\ta[%d] : ",i);
			scanf("%d",&a[i]);
			}
			else if(j==2)
			{
			printf("\tb[%d] : ",i);
			scanf("%d",&b[i]);
			}
		}	
	}
	printf("\n\tArray C is :");
	for(i=0;i<n;i++)
	{
		
			c[i]=a[i]+b[i];
			printf("%d ,",c[i]);
	}
}
/*
Output:

        Enter the array size: 3

        Enter array A's element:
        a[0] : 5
        a[1] : 6
        a[2] : 7

        Enter array B's element:
        b[0] : 2
        b[1] : 3
        b[2] : 6

        Array C is :7 ,9 ,13 ,
*/