//Program for conditional statements

/*PROGRAMER:Mbai Samuel
AGE:18
COURSE:BBIT
Reg NO:CT102/G/24153/24
*/
#include <stdio.h>
int main(){
	//Declaraton and initializatio
	int age;
	float annual_income;
	
	printf("Enter the age:");
	scanf("%d",&age);
	
	printf("Enter the annual_income:");
	scanf("%f",&annual_income);
	
	//results
	if(age>=21,annual_income>=21000)
	{printf("congratulations you qualify for loan\nPlease proceed");}
		else{
			printf("Oops!Sorry, you do not qualify for loan currently\nTry again later");
		}
		
		return 0;
}