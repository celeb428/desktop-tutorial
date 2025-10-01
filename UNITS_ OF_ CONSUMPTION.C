/*
Name:CALEB NGUGI MBURU
Reg:CT100/G/26188/25
Date:30/9/2025
Desription:CHARGES FOR WATER CONSUMPTION
*/
#include <stdio.h>

int main()
{
	int units;
	float bill;
	
	printf("enter water units consumed:");
	scanf("%d",&units);
	
	if(units<=30){
		bill=units*20.0;
	}
	else if(units<=60){
		bill=(30*20.0) +((units-30)*25.0);
	}
	else
	{
		bill=(30*20.0)+(30*25.0)+((units-60)*30.0);
		}
	printf("total water bill:%2f KES\n",bill);
	
	return 0;
}