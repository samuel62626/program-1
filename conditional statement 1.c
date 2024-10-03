//Program for conditional statements

/*PROGRAMER:Samuel
AGE:18
COURSE:BBIT
*/
#include <stdio.h>
int main(){
	//Declaraton and initialization
	int age;
	float annual_income;
	
	printf("Enter the age:");
	scanf("%d",&age);
	
	printf("Enter the annual_income:");
	scanf("%f",&annual_income);
	
	//results
	if(age>=21,annual_income>=21000)
	{printf("Congratulations you qualify for a loan");}
		else{
			printf("Unfortunately,we are unable to offer you a loan at this time");
		}
		
		return 0;
}
