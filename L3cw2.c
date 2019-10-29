#include <stdio.h>
#include <math.h>

main(){
float y0,y1,L,E;

printf("podaj L i epsilon: ");
scanf("%f %f",&L,&E);

y1=L/2;

if(L<0 || E<=0)
printf("bledne L lub epsilon\n");

else{
	do{
		y0=y1;
		y1=0.5*(y0+L/y0);
	}
	while(fabs(y1-y0)>=E);}
	
	printf("wynik: %f\n",y1);
	system("pause");
}

