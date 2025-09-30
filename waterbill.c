/*
REG NO:PA106/G/28713/25
NAME:RONNY KIMUTAI
DESCRIPTION:PROGRAM TO DISPLAY WATER BILL
*/
#include<stdio.h>
int main()
{
	float units,TB;
	printf("enter the units:");
	scanf("%f",&units);
	if (units<=30)
	{
	TB=units*20;
	printf("total bill=.2%f",TB);
		}
    else if(units>60)
	{
		TB=units*30;
		printf("total bill=.2%f",TB);}
     else
 	{
 		TB=units*25;
 		printf("total bill=.2%f",TB);
	 	
	 }
	
	return 0;
}