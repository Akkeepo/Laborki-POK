#include<stdio.h>
#include<math.h>

main () {
	
float z,x;
printf("podaj x: ");
scanf("%f",&x);

if (x<-2)
printf("pierwiastek nie moze byc ujemny");

else{
z=sqrt(x+2)/(3*x*x-7*x+2);
printf("wynik: %f",z);}

}
