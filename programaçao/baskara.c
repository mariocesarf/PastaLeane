#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){

float a, b, c;
float x1, x2, d, rd;

scanf ("%f", &a);

if (a <= 0){
	printf ("impossivel calcular");
	return 0;
}

scanf ("%f", &b);
scanf ("%f", &c);
d= b*b - 4*a*c;
if (d < 0){
       printf ("impossivel calcular");
       return 0;
}
rd= sqrt (d);
x1 = ((-b+rd)/(2*a));
x2 = ((-b-rd)/(2*a));

printf ("X1 = %0.5f\n", x1);
printf ("X2 = %0.5f", x2);
return 0;
}
