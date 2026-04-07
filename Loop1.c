#include<stdio.h>
int main()
{//while loop 
	int i=1,n;
	printf("Enter n:\n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		printf("\n%d",i);
		else
		printf("\n%d",i*i);
		i++;
	}
	
}
/*
Output:
Enter n:
8

1
4
3
16
5
36
7
64
*/
