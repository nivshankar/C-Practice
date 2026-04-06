#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter n:\n");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\n%d",i*i);
		i++;
	}
}
/*
Output:
Enter n:
9

1
4
9
16
25
36
49
64
81
*/