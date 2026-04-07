#include<stdio.h>
int main()
{//do while
	int i,n,a,j;
	printf("Enter n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=i;
		if(i>1)
		{
		
  		    for(j=1;j<i;j++)
            {	
   				a=a*2;
			}
		}
		printf("%d ",a);
	}
}
/*
Output:
Enter n:
10
1 4 12 32 80 192 448 1024 2304 5120
*/
