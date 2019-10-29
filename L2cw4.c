#include <stdio.h>
#include <math.h>

main() {
int Np,Nk,i;
float suma,roznica,sumaW,y,min,minU;
printf ("wpisz Np oraz Nk: ");
scanf ("%d %d", &Np,&Nk);

if (Nk<Np)
printf("blad, wpisz Np<Nk");
else{
	min=64;
for (i=1;i<=Nk;i++){
	y=-pow(i,2)+15*i+50;
	if(y<min)
	y=min;
	else;}

	minU=-pow(Np,2)+15*Np+50;
for (i=Np;i<=Nk;i++){
	y=-pow(i,2)+15*i+50;
	suma+=y;
	if(y<minU)
	y=minU;
	else;}
}
printf("\nsuma wyrazow %d-%d: %f\n",Np,Nk,suma);
printf("najmniejszy wyraz z przedzialu 1-%d: %f\n",Nk,min);
printf("najmniejszy wyraz z przedzialu %d-%d: %f",Np,Nk,minU);
}


