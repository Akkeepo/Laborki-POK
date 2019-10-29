#include<stdio.h>
#include<math.h>

main() {
	
float y,x;
printf("wpisz x: ");
scanf("%f",&x);

if (x<0){

y=sqrt(fabs(2+x));
printf("f(x)= %f",y);}

else
	if(x==0){
	y=2;
	printf("f(x)= 2");}
	else{
	y=pow(x,2)+exp(2*x);
	printf("f(x)= %f",y);}
	}

