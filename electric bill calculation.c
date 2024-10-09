//Program to calculte and display electric bill

/*Author:SAMUEL
Reg NO:CT102/G/24153/24
Course:BBIT
*/

#include <stdio.h>
int main(){
	int customerID;
	int units;
	char customerName[6];
	float chargePerUnit,totalBill,surcharge=0;
	
	//prompt the user to enter
	printf("Enter the customerID:");
	scanf("%d",&customerID);
	printf("Enter the customerName:");
	scanf("%s",&customerName);
	printf("Enter the unitConsumed:");
	scanf("%f",&units);
	//if functons
	if (units <=199){
		chargePerUnit=1.20;
	}
	else if(units >=200 && units < 400){
		chargePerUnit=1.50;
	}
	else if(units >=400 && units <600){
		chargePerUnit=1.80;
	}else{
		chargePerUnit=2.00;
	}
	
	//calculate the total bill
	totalBill= units*chargePerUnit;
	//surcharge if total bill exceeds Ksh400
	if(totalBill>400){
		surcharge=totalBill*0.15;
		totalBill+=surcharge;
	}
	//minimum bill
	if(totalBill<100){
		totalBill = 100;
	}
	//The results
	printf("CustomerID:%d\n",customerID);
	printf("CustomerName:%s\n",customerName);
	printf("\nUnits Consumed:%d\n",units);
	printf("Charge Per Unit:Ksh%f\n",chargePerUnit);
	printf("Total Amount to Pay:Ksh%f\n",totalBill);
	
	return 0;
}
