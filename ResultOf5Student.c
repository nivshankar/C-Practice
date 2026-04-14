#include<stdio.h>
int main()
{
	int maths[5],sci[5],eng[5],i,total[5];
	float percentage[5];
	for(i=0;i<5;i++)
	{
		printf("\nEnter Maths,Science and English marks of Student %d:\n",i+1);
		scanf("%d%d%d",&maths[i],&sci[i],&eng[i]);
		if(maths[i]>100||sci[i]>100||eng[i]>100)
		{
			printf("\nInvalid Marks..");
			return 0;
		}
		total[i]=maths[i]+sci[i]+eng[i];
		percentage[i]=total[i]/3.0;
	}
	for(i=0;i<5;i++)
	{
		if(i==0)
		{
			printf("\nMaths\t|Sci\t|Eng\t|Total\t|Per\t|Grade");
		}
		if(85.0<=percentage[i])
		{
			printf("\n%d\t|%d\t|%d\t|%d\t|%.2f\t|A",maths[i],sci[i],eng[i],total[i],percentage[i]);
		}
		else if(percentage[i]>=70.0)
		{
			printf("\n%d\t|%d\t|%d\t|%d\t|%.2f\t|B",maths[i],sci[i],eng[i],total[i],percentage[i]);
		}
		else if(percentage[i]>=50.0)
		{
			printf("\n%d\t|%d\t|%d\t|%d\t|%.2f\t|C",maths[i],sci[i],eng[i],total[i],percentage[i]);
		}
		else if(percentage[i]>=33.0)
		{
			printf("\n%d\t|%d\t|%d\t|%d\t|%.2f\t|D",maths[i],sci[i],eng[i],total[i],percentage[i]);
		}
		else
		printf("\n%d\t|%d\t|%d\t|%d\t|%.2f\t|F",maths[i],sci[i],eng[i],total[i],percentage[i]);
	}
	
	
}
/*
Output:
Enter Maths,Science and English marks of Student 1:
67
68
69

Enter Maths,Science and English marks of Student 2:
56
57
35

Enter Maths,Science and English marks of Student 3:
57
79
68

Enter Maths,Science and English marks of Student 4:
99
67
69

Enter Maths,Science and English marks of Student 5:
90
67
57

Maths   |Sci    |Eng    |Total  |Per    |Grade
67      |68     |69     |204    |68.00  |C
56      |57     |35     |148    |49.33  |D
57      |79     |68     |204    |68.00  |C
99      |67     |69     |235    |78.33  |B
90      |67     |57     |214    |71.33  |B
*/

