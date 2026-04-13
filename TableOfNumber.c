#include<stdio.h>
int main()
{
	int n,i;
	printf("\nEnter any number:\n");
	scanf("%d",&n);
	for(i=1;i<11;i++)
	{
		printf("\n%d X %d = %d",n,i,n*i);
	}
}
/*
Output:

Enter any number:
6

6 X 1 = 6
6 X 2 = 12
6 X 3 = 18
6 X 4 = 24
6 X 5 = 30
6 X 6 = 36
6 X 7 = 42
6 X 8 = 48
6 X 9 = 54
6 X 10 = 60
*/