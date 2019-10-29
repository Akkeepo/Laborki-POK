#include <stdio.h>
#include <math.h>

main () {
	int i=0,x,p=0;
	float suma=0,iloczyn=1;
	
	do{
	printf("wprowadz x: ");
	scanf("%d",&x);
		if(x%2==0 )
		p++;
		else;
	suma+=x;
	i++;
		if(x<5 || x>10){
		iloczyn=x*iloczyn;
		}
		else;
}
	while(x>0);
	
printf("\nsrednia arytmetyczna liczb= %f\n",(float)suma/i);
printf("iloczyn liczb <5 i >10 = %f\n",iloczyn);
printf("liczba wpisanych liczb parzystych: %d",p);

}
