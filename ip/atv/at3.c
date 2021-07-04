#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
int a = atoi(argv[1]);

if (a >=1 && a<=10){
	a = a/4;
	printf ("%d",a);
}else{
	a = a+4;
	printf ("%d",a);
}

return 0;

}
