//simple c program(hello world)single line
/*
name :CALEB NGUGI MBURU
reg:CT100/G/26188/25
description:find volume of a cylinder and also the surface area
*/
#include <stdio.h>


int main()
{
	
float height, radius, volume, surfacearea, PI=3.142;
	
	
	printf("enter the radius of cylinder in centimetres:");
	scanf("%f",&radius);

	
	printf("enter the height of the cylinder in centimetres");
	scanf("%f",&height);
	
	volume=PI*radius*radius*height;
printf("volume of cylinder :%2.f\n",volume);
	
	surfacearea = 2 * 3.142 * radius * radius + 2 * 3.142 * radius * height;
printf("surfacearea of cylinder:%2.f\n",surfacearea );	
	return 0;
}