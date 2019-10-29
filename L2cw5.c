#include <stdio.h>
#include <math.h>

main() {
	int i;
	float y,a0=1,a1=1.5,a2=2,N;
	printf("podaj liczbe elementow: ");
	scanf("%f",&N);
	
	if(N<=0)
	printf("bledne dane");
	else {
		for(i=1;i<=N;i++){
			y=a0*pow((a1+a2),1.0/2.0);
			printf("\na%d wynosi: %f\n",i,y);
			a2=a1;
			a1=a0;
			a0=y;	
		}
	}
}
