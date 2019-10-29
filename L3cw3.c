#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
	int i,N;
	float suma=0,x;
	
	printf("wczytaj x i N: ");
	scanf("%f %d",&x,&N);
	
	if (N<-5)
	printf("blad");
	
	for(i=(-5);i<=N;i++){
		suma+=pow(x,(float)i)*sin(i*x);
	}
	printf("suma: %f\n",suma);
	system("pause");
}
