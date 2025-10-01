/*
Name:CALEB NGUGI MBURU
Reg:CT100/G/26188/25
Date:01/10/2025
Description:MOBILE DATA PURCHASE
*/
#include <stdio.h>
int main(int argc, char** argv)
{
	int choice;
	
	printf("select data bundle:\n");
	printf("1.100mb@50KES\n");
	printf("2.500MB@200KES\n");
	printf("3.1GB@350KES\n");
	printf("4.2GB@600KES\n");
	
	printf("enter your choice(1-4):");
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 1:
		printf("you selected 100MB.cost=50KES\n");
		break;
	case 2:
		printf("you selected 500MB.cost=200KES\n");
		break;
	case 3:
		printf("you selected 1GB.cost=350KES\n");
		break;
	case 4:
		printf("you selected 2GB.cost=600KES\n");
		break;
	default:
		printf("invalid choice\n");
		
	}
	return 0;
}