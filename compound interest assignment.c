//program to find the compound interest

#include <stdio.h>
#include <math.h>

float principle,rate,time,final_amuont,compound_interest;

int main (){
	//Get user input
int n;	
	printf("Enter the principle:");
	scanf("%f",&principle);
	
	printf("Enter the rate:");
	scanf("%f",&rate);
	
	printf("Enter the time:");
	scanf("%f",&time);
	
	printf("Enter the number of times interest is compounded per year:");
	scanf("%d",&n);
	
	//calculate the final amount after compound interest
    float final_amount=principle*pow((1+(rate/(n*100))),n*time);
	compound_interest=final_amount-principle;
	
	//results
	printf("compound interest is:%.2f\n",compound_interest);
	printf("amount after compound interest is:.2f\n",final_amount);
	
	return 0;
}