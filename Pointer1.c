#include<stdio.h>
int main()
{
	int n=19;
	int *p;
	p=&n;
	printf("%u => %d",p,*p);
}
/*
Output:
6684228 => 19
*/