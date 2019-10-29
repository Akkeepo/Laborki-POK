#include <stdio.h>
#include <math.h>

main () {
	float xp,xk,deltax;
	printf("podaj xp, xk, delte: ");
	scanf ("%f %f %f", &xp,&xk,&deltax);
	
	if(xp>xk || xp>xk+deltax || deltax==0)
	printf ("bledne wprowadzenie");

do{
	printf("x: %f\t x^2: %f\t x^3: %f\n",xp,pow(xp,2),pow(xp,3)); 
	xp=xp+deltax;}
	
	while(xp<xk);
}
