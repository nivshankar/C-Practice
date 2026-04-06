#include<stdio.h>
int main()
{
	int i=1,n,extra;
	printf("Enter n:\n");
	scanf("%d",&n);
	extra=n;
	while(i<=n)
	{
		if(i%2!=0)
		printf("\n%d",i);
		i++;
	}
}
/*
Output:
Enter n:
56

1
3
5
7
9
11
13
15
17
19
21
23
25
27
29
31
33
35
37
39
41
43
45
47
49
51
53
55
*/