#include<stdio.h>
#include<math.h>

main() {
	float x,y;
	printf("wpisz x: ");
	scanf("%f",&x);
	
	if(x<=-5){
	y=2*x+10/3;
	printf ("f(x)= %f",y);}
	
	else
		if(x<7){
		y=sqrt(fabs(x))+exp(x/2+1);
		printf ("f(x)= %f",y);}
		else{
		y=pow(sin(2*x)+pow(x,2),1.0/3.0);
		printf ("f(x)= %f",y);}
		}
		

