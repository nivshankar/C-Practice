#include<stdio.h>
int main()
{
	int lan,category;
	printf("\nPress 1 for English");
	printf("\nPress 2 for Hindi");
	printf("\nPress 3 for Gujarati");
	printf("\nEnter Your choice: ");
	scanf("%d",&lan);
	switch(lan)
	{
		case 1:
		printf("\nPress 1 for Internet Recharge");
		printf("\nPress 2 for Top-up Recharge");
		printf("\nPress 3 for Special Recharge");
		printf("\nEnter Your choice: ");
		scanf("%d",&category);	
		switch(category)
		{
			case 1:
			printf("\nYou have successfuly done a Internet Recharge.");
			break;
			case 2:
			printf("\nYou have successfuly done a Top-up Recharge.");
			break;
			case 3:
			printf("\nYou have successfuly done a Special Recharge.");
			break;
			default:
			printf("\nInvalid choice.");
		}
		break;
		
		case 2:
		printf("\nInternet Recharge ke liye 1 dabaiye");
		printf("\nTop-up Recharge ke liye 2 dabaiye");
		printf("\nSpecial Recharge ke liye 3 dabaiye");
		printf("\nEnter Your choice: ");
		scanf("%d",&category);
		switch(category)
		{
			case 1:
			printf("\nAapne safaltapurvak Internet Recharge kar liya he.");
			break;
			case 2:
			printf("\nAapne safaltapurvak Top-up Recharge kar liya he.");
			break;
			case 3:
			printf("\nAapne safaltapurvak Special Recharge kar liya he.");
			break;
			default:
			printf("\nInvalid choice.");
		}
		break;
		
		case 3:
		printf("\nInternet Recharge mate 1 dabavo");
		printf("\nTop-up Recharge mate 2 dabavo");
		printf("\nSpecial Recharge mate 3 dabavo");
		printf("\nEnter Your choice: ");
		scanf("%d",&category);
		switch(category)
		{
			case 1:
			printf("\nTame safaltapurvak Internet Recharge karyu chhe.");
			break;
			case 2:
			printf("\nTame safaltapurvak Top-up Recharge karyu chhe.");
			break;
			case 3:
			printf("\nTame safaltapurvak Special Recharge karyu chhe.");
			break;
			default:
			printf("\nInvalid choice.");
		}
		break;
		default:
		printf("\nInvalid choice.");	
	}
}
/*
Output:
Press 1 for English
Press 2 for Hindi
Press 3 for Gujarati
Enter Your choice: 1

Press 1 for Internet Recharge
Press 2 for Top-up Recharge
Press 3 for Special Recharge
Enter Your choice: 4

Invalid choice.
*/