#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
	int p=0,n,silnia=1,x;
	float q,eps;
	
	printf("wczytaj n, q, eps: ");
	scanf("%d %f %f",&n,&q,&eps);
	
	if(eps<=0)
	printf("blad");
	
	do{
	p++;
	silnia*=p;
	x=1.0/silnia*pow(n-q,p-1.0)*exp(n*q);
	}
	while(x>=eps);
	
	printf("minimalna wartosc: %d\n",p);
	system("pause");
}
