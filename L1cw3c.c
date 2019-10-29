#include<stdio.h>
#include<math.h>

main() {
	float x,y;
	printf("wpisz x: ");
	scanf("%f",&x);
	
	if(1<=x<=7){
	y=pow(2*x+1/4,1.0/4.0);
	printf("%f",y);}
	else{
	y=cos(exp(2*x));
	printf ("%f",y);}
	
}
