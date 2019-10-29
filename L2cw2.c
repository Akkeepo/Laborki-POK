#include <stdio.h>
#include <math.h>

main () {
	int i,N,licznik=0;
	float x,suma=0,sumaD=0,sumaU=0,srednia=0,sredniaU=0;
	
	printf("wprowadz ilosc powtorzen: ");
	scanf("%d", &N);
	
	if(N<=0)
	printf("blad");
	
	else{
		for(i=1;i<=N;i++){
			printf("wprowadz x%d: ",i);
			scanf("%f",&x);
			suma+=x;
			srednia=suma/i;
			if (x>0)
				sumaD+=x;
				
			else {
				if(x<0){
				licznik++;
				sumaU+=x;
				sredniaU=sumaU/licznik;}
				else;}
			}

printf("\nsuma= %f\n",suma);
printf("suma liczb >0 = %f\n",sumaD);
printf("srednia wszystkich liczb= %f\n",srednia);
printf("srednia liczb <0 = %f",sredniaU);
						
	}
}


