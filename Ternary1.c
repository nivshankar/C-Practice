#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	a<b
	? (a<c
	  ?printf("%d is the minimum.",a)
	  :printf("%d is the minimum.",c)
	  )
	:(b<c
	  ?printf("%d is the minimum.",b)
	  :printf("%d is the minimum.",c)
	 );

}
/*
Output:
Enter three numbers:
26
7
438
7 is the minimum.
*/