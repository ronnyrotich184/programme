/*
REG NO:PA106/G/28713/25
NAME:RONNY KIMUTAI
DESCRIPTION:PROGRAM TO DISPLAY WATER BILL
*/
#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	float Att,Marks;
	printf("enter the Att and marks:");
	scanf("%f%f",&Marks);
	if(Att>=75 &&Marks>=40)
	{
		printf("eligible for final exams/n");
	}
	else
	{
		printf("not eligible for final exams/n");
	}
	return 0;
}
