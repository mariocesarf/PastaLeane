#include <stdio.h>

int main (){
int i= 10;
char c= 15;
float f= 34.5;
double d= 63.9;

printf ("o valor de i= %d e tem %lu bytes\n", i, sizeof (int));
printf ("o valor de c= %c e tem %lu bytes\n", c, sizeof (char));
printf ("o valor de f= %f e tem %lu bytes\n", f, sizeof (float));
printf ("o valor de d= %lf e tem %lu bytes\n", d, sizeof (double));
printf ("o tipo void tem %lu bytes", sizeof (void));
}
