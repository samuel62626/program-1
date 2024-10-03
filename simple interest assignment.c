//Progam to find simple interest

#include <stdio.h>

float principle,rate,time,interest;

int main(){
	printf("Enter the principle:");
	scanf("%f",&principle);
	
	printf("Enter the rate:");
	scanf("%f",&rate);
	
	printf("Enter the time:");
	scanf("%f",&time);
	
	//calculate the interest
	interest = (principle*rate*time)/100;
	printf("The interest is:%f",interest);
	
	return 0;
}