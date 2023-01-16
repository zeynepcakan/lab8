#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b;
	printf("please enter a number:"); scanf("%d",&a);
	printf("\nplease enter a number:"); scanf("%d",&b);
	
	int sum=0;
	sum=a+b;
	printf("Sum= %d",sum);	
	
	
	return 0;
}
