//2DC
/*
AUTHOR:SaMUel
Reg NO:CT102/G/24153/24
COURSE:BBIT
*/

#include <stdio.h>
int main()
{
	int i,j;
	int marks[2][3]={{30,40,50},{60,70,80}};
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		printf("marks[%d][%d]=%d\n",i,j,marks[i][j]);
		}
	}

	return 0;
}