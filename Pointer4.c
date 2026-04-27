#include <stdio.h>
int main()
{
    int a, b,temp;
    int *p, *q;
    printf("\n\tEnter two numbers:");
    scanf("%d %d", &a, &b);
    p = &a;
    q = &b;
    printf("\n\tBefore swapping: \n\ta : %d\n\tb : %d\n", a, b);
    temp = *p;
    *p = *q;
    *q = temp;
    printf("\n\tAfter swapping: \n\ta : %d\n\tb : %d\n", a, b);
}
/*
Output:

        Enter two numbers:34
45

        Before swapping:
        a : 34
        b : 45

        After swapping:
        a : 45
        b : 34

*/