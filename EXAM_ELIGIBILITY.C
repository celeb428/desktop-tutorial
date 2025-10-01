/*
Name:CALEB NGUGI MBURU
Reg:CT100/G/26188/25
Date:30/9/2025
Description:PROGRAM THAT CHECKS IF A STUDENT IS ELIGBLE FOR FINAL EXAMS
*/

#include <stdio.h>
 int main()
 {
 	int percentage_class_attendance;
 	float average_exam_marks;
 	
 	printf("enter the percentage class_attendance\n");
 	scanf("%f",&percentage_class_attendance);
 	
 	printf("enter average_exam_marks\n");
 	scanf("%f",&average_exam_marks);
 	
 	if(percentage_class_attendance>=75&&average_exam_marks>=40
)
{
	printf(" eligible");
}else
{
	printf("not eligible");
}

 	
	 
	 return 0;
 }