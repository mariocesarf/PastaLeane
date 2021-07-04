#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

unsigned char a;

a =atoi(argv[1]);
a = a << 2;

printf ("%d",a);

return 0;
}
