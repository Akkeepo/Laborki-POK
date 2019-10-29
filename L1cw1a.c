#include<stdio.h>
#include<math.h>

main () {
	
	float a,b,c;
	b = 7.5;
	printf ("podaj c: ");
	scanf ("%f",&c);
	
	a=sqrt(b*b+c*c);
	printf ("wynik: %f", a);
}
