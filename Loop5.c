#include<stdio.h>
int main()
{
	int i=1,n,extra;
	printf("Enter n:\n");
	scanf("%d",&n);
	extra=n;
	while(i<=n)
	{
		if(i%2==0)
		printf("\n%d",i);
		i++;
	}
}
/*
Output:
Enter n:
46

2
4
6
8
10
12
14
16
18
20
22
24
26
28
30
32
34
36
38
40
42
44
46
*/