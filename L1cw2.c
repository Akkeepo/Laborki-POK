#include<stdio.h>
#include<math.h>

main () {
	
float a,b,y;
printf ("y=ax+b\n");

printf("podaj a: ");
scanf("%f",&a);
printf("podaj b: ");
scanf("%f",&b);

if(a==0)
printf("brak miejsc zerowych");
else{
b=-b;
y=b/a;
printf("Miejsce zerowe: %f",y);
}
}




