#include <stdio.h>
#include <math.h>

main (){
	float delx,xp,xk,x,max=0,sr,suma=0,wyraz=0;
	
	printf("podaj xp,xk,delx:");
	scanf("%f %f %f",&xp,&xk,&delx);
	
	if (delx<=0 || xp>xk)
	printf("bledne dane, wczytaj delx>0 lub xp<xk");
	else{
		
		for(xp;xp<=xk;xp+=delx){
			wyraz++;
			if (xp<0)
			x=xp*xp*xp+1.0/xp;
			else{
			if(xp==0)
			x=3*sqrt(2.0);
			else
			x=pow(sin(pow(xp,1.0/2.0)),1.0/3.0);}
			if(x>max)
			max=x;
			else;
			suma+=x;}
			
		sr=suma/wyraz;
		printf("\nwartosc maksymalna: %f\n", max);
		printf("srednia wartosc: %f\n",sr);
		system("pause");
		
	}
}
