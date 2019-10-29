#include <stdio.h>
#include <math.h>

main() {
	
	float x,y,b,c;
	
	printf("podaj b: ");
	scanf("%f",&b);
	printf("podaj c: ");
	scanf("%f",&c);
	printf("podaj x: ");
	scanf("%f",&x);
	
	y=2+pow(x,4)+b*pow(x,3)+c*x*x+8;
	
	printf("wynik: %f\n",y);
	system("pause");
}
