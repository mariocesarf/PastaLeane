#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
int n =atoi (argv[1]);

if ((n % 5) ==0){
	n = n*4;
	printf ("%d", n);
} else {
	n = n*3;
	printf ("%d", n);
}
return 0;
}

