//c structures
/*programer:Samuel
Reg No:CT102/G/24153/24
course:BBIT
*/

#include <stdio.h>
#include <string.h>
//DECLARING THE USER
struct book{
	char title[30];
	char author[30];
	int publication_year;
	char ISBN[13];
	float price;
	
}
book1;
int main(){
	// prompt the user to enter the book title
	printf("enter the book title:");
	scanf("%s",&book1.title);

	printf("enter the book author:");
	scanf("%s",&book1.author);
	
	printf("enter the book publication_year:");
	scanf("%d",&book1.publication_year);
	
	printf("enter the book ISBN:");
	scanf("%s",&book1.ISBN);
	
	printf("enter the book price:");
	scanf("%f",&book1.price);
	
	//the output
	printf("the book title is: %s\n",book1.title);
	printf("the book author is :%s\n",book1.author);
	printf("the book publication_yearis: %d\n",book1.publication_year);
	printf("the book ISBN is :%s\n",book1.ISBN);
	printf("the book price is: %f\n",book1.price);
	
	
	
	
	
	
	return 0;
}