#include<stdio.h>
#include<math.h>

main(){
	
	float a11,a12,a21,a22,b1,b2,x,y,w,wx,wy;
	printf("podaj a11:");
	scanf("%f",&a11);
	printf("podaj a12:");
	scanf("%f",&a12);
	printf("podaj a21:");
	scanf("%f",&a21);
	printf("podaj a22:");
	scanf("%f",&a22);
	printf("podaj b1:");
	scanf("%f",&b1);
	printf("podaj b2:");
	scanf("%f",&b2);
	
	w=a11*a22-a12*a21;
	wx=a12*b2-a22*b1;
	wy=a11*b2-a21*b1;
	
if (w!=0){
	x=wx/w;
	y=wy/w;
	printf("x=%f\ny=%f",x,y);}
else{
	if(wx==0 && wy==0)
		printf ("brak rozwiazan");
	else
		printf ("nieskonczenie wiele rozwiazan");}	
}
