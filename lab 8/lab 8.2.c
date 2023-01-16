#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int r,islem;
	float cevre,alan,pi=3.14;
	printf("islem giriniz(1 ya da 2):"); scanf("%d",&islem);
	
	//cevre icin islem 1,alan icin islem 2.
	
	printf("r="); scanf("%d",&r);

	if(islem==1)
	{
		cevre=2*pi*r;
		printf("Cevre= %f",cevre);
	}
	else if(islem==2)
	{
		alan=pi*r*r;
		printf("Alan= %f",alan);
	}
	else
	printf("hatali giris yaptiniz!!");

	return 0;
}
