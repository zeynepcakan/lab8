#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int midtermGrade, finalGrade;
	float average;
	
	printf("enter midterm grade:"); scanf("%d",&midtermGrade);
	printf("enter final grade:"); scanf("%d",&finalGrade);
	
	average=(float)midtermGrade*0.4+(float)finalGrade*0.6;;
	printf("Average= %f",average);
	
	return 0;
}

