#include<stdio.h>
int main()
{
	int y1,y2,i;
	printf("Enter starting year:\n");
	scanf("%d",&y1);
	printf("Enter ending year:\n");
	scanf("%d",&y2);
	printf("\n");
	for(i=y1;i<=y2;i++)
	{
		if(i%4==0)
		printf("%d ",i);
	}
}
/*
Output:
Enter starting year:
2002
Enter ending year:
2056

2004 2008 2012 2016 2020 2024 2028 2032 2036 2040 2044 2048 2052 2056
*/