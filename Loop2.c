#include<stdio.h>
int main()
{
	int i=0,n;
	printf("Enter n:\n");
	scanf("%d",&n);
	
	while(i<n)
	{
		printf("\n%d",n-i);
		i++;
	}
}
/*
Output:
Enter n:
19

19
18
17
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1
*/