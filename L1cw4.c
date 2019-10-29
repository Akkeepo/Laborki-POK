#include <stdio.h>

main() {

float a,b,c,delta,p,x1,x2;
printf("f(x)=Ax^2+Bx+C\n");

printf("Wpisz A: ");
scanf ("%f",&a);

printf("Wpisz B: ");
scanf ("%f",&b);

printf("Wpisz C: ");
scanf ("%f",&c);

printf("\n");

delta=b*b-(4*a*c);
printf ("delta wynosi: %f\n",delta);

if(delta<0)
    printf("brak miejsc zerowych\n");


else {
    p=sqrt(delta);
    printf("pierwiastek z delty wynosi: %f\n\n",p);
    x1=(-b+p)/(2*a);
    printf("x1 wynosi: %f\n\n",x1);
    x2=(-b-p)/(2*a);
    printf("x2 wynosi: %f\n\n",x2); }

    system("pause");
    return 0;
}

