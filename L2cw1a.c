#include <stdio.h>
#include <math.h>

main () {
	float deltax, xp, xk;
	printf("podaj xp, xk, delte: ");
	scanf ("%f %f %f", &xp,&xk,&deltax);
	
	if(xp>xk || xp>xk+deltax || deltax==0)
	printf ("bledne wprowadzenie");
	
	else{
	for(xp;xp<=xk;xp++){
	printf("x: %f\t x^2: %f\t x^3: %f\n",xp,pow(xp,2),pow(xp,3));}
	}

}
