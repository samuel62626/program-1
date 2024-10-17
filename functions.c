// C function
#include <stdio.h>//scanf()printf()
#include<math.h>//cos()sin()tan()etc
int sum(int x,int y, int z);
int main(){
	int x=sum(10,20,30);//function calling
	int y=mult(10,20,30);//function calling
	printf("the sum is %d",x);
	printf("the mult is %d",y);
	return 0;
	
}

int sum(int x,int y ,int z){
	int results;
	results = x+y+z;
	
	return results;
}
//function declaration
int mult(int x,int y,int z){
	int results = x*y*z;
	
	return results;
}
