#include<stdio.h>
int main()
{
	int mark1,mark2,mark3;
	printf("Enter Maths Marks:");
	scanf("%d",&mark1);
	if(mark1<=100&&mark1>=0)
	{
		printf("Enter English Marks:");
		scanf("%d",&mark2);
		if(mark2<=100&&mark2>=0)
		{
			printf("Enter Science Marks:");
			scanf("%d",&mark3);
			if(mark3<=100&&mark3>=0)
			{
				printf("Average marks:%.2f",(mark1+mark2+mark3)/3.0);
			}
			else
			printf("\nEnter valid marks ranging from 0 to 100.");
		}
		else
		printf("\nEnter valid marks ranging from 0 to 100.");
	}
	else
	printf("\nEnter valid marks ranging from 0 to 100.");
}
/*
Output:
Case 1)
Enter Maths Marks:98
Enter English Marks:56
Enter Science Marks:67
Average marks:73.67

Case 2)
Enter Maths Marks:57
Enter English Marks:680

Enter valid marks ranging from 0 to 100.
*/