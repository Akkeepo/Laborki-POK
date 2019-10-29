#include<stdio.h>
#include<math.h>

main () {
	
	float y,x;
	printf("podaj x: ");
	scanf("%f",&x);
	
	y=pow((1/3+sin(x/2.0)*(pow(x,3)+3)),1.0/3.0);
	
	if (y<0)
	printf ("pierwiastek nie mo¿e byæ mniejszy od zera");
	else
	printf ("wynik: %f", y);
	
}
