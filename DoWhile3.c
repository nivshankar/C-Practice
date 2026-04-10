#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter any number:\n");
	scanf("%d",&n);
	do
	{
		if(i%2==0)
		printf("%d ",i);
		i++;
	}while(i<=n);
}
/*
Output:
Enter any number:
27
2 4 6 8 10 12 14 16 18 20 22 24 26
*/