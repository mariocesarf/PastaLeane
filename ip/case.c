#include <stdio.h>

int main (){

int cod, q;
float v;
scanf ("%d", &cod);
scanf ("%d", &q);
if (cod == 1){
	v= q*4;
	printf ("Total: R$ %0.2f", v);
}
if(cod == 2){
  	v= q*4.5;
	printf ("Total: R$ %0.2f", v);
}
if (cod == 3){
        v= q*5;
        printf ("Total: R$ %0.2f", v);
}
if (cod == 4){
        v= q*2;
        printf ("Total: R$ %0.2f", v);
}
if (cod == 5){
	v=q*1.5;
	printf ("Total: R$ %0.2f", v);
}
return 3;
}
