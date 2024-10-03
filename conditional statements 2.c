//program for conditional statements

/*NAME:Samuel
AGE:18
COURSE:BBIT
*/

#include <stdio.h>
int main(){
	
	//declaration and initialization
	int book_id;
	int due_date;
	int return_date;
	int days_overdue;
	int fine_rate;
	int fine_amount;
	
	printf("Enter the book_id:");
	scanf("%d",&book_id);
	printf("Enter the due_date:");
	scanf("%d",&due_date);
	printf("Enter the return_date:");
	scanf("%d",&return_date);
	
	//calculate the days_overdue
	days_overdue = return_date - due_date;
	if(days_overdue<=7){
		fine_rate=20;
		fine_amount=fine_rate*days_overdue;
		printf("The fine_amount is:%.2d",fine_amount);
	}
	else if(days_overdue<=15){
		fine_rate=50;
		fine_amount=fine_rate*days_overdue;
		printf("The fine_amount is:%.2d",fine_amount);
	}
	else {
		fine_rate=100;
		fine_amount=fine_rate*days_overdue;
		printf("The fine_amount is:%.2d",fine_amount);
	}
	
	//results display
	printf("The book_id is:%d\n",book_id);
	printf("The due_date is:%d\n",due_date);
	printf("The return_date is:%d\n",return_date);
	printf("The fine_rate is:%d\n",fine_rate);
	printf("The fine_amount is:%d\n",fine_amount);
	printf("The days_overdue is:%d\n",days_overdue);
	
	return 0;
	
}