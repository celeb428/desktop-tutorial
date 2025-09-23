/*
Name:CALEB NGUGI MBURU
reg:CT100/G/26188/25
description:program for loan application
*/
#include <stdio.h>

int main()
{
	int age;
	float annualincome;
	  
	  printf("enter your age\n");
	  scanf("%d",&age);
	  
	  printf("enter your annualincome in ksh\n");
	  scanf("%f",&annualincome);
	  
	  
	  
	  
	  if (annualincome>=21000&&age>=21 )
	  {
	  	
		  printf("congratulation you qualify for a loan");
	  }else
	  {
		printf("unfortunately we are unable to offer you a loan at this time");  
	  }
	
	
	
	return 0;
}