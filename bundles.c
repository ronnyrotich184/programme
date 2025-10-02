 /*NAME:RONNY KIMUTAI
REG NO:PA106/G/28713/25
DESCRIPTION:PROGRAM TO DISPLAY SEMESTER ONE UNITS
*/
#include <stdio.h>
int main(){
int choice;
printf("select the data bundle d/n",choice);
printf("1.100mb @ 50 kes/n",choice);
printf("2.500mb @ 200 kes/n",choice);
printf("3.1GB @ 350 kes/n",choice);
printf("4.2GB @ 600 kes/n",choice);
printf("enter your choice(1-4):/n");
scanf("%d,$choice");
if(choice=1)
{
	printf("you selected 100mb");
}
	else if(choice=2)
	{
		printf("you selected 500mb");
	}
else if(choice=3)
{
	printf("you selected 1GB");
}	
else if(choice=4)
{
	printf("you selected 2GB");
}	
else
{
	printf("invalid choice");
}
return;

}