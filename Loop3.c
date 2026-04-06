#include<stdio.h>
int main()
{
	int n,i=0,extra;
	printf("Enter n:\n");
	scanf("%d",&n);
	extra=n;
	while(i<=2*n)
	{
		printf("\n%d",extra);
		extra--;
		i++;
	}
}
/*
Output:
Enter n:
7

7
6
5
4
3
2
1
0
-1
-2
-3
-4
-5
-6
-7
*/