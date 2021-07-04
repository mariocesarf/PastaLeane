#include <stdio.h>
#include <stdlib.h>

int main(){
int in =0;
int out=0;
int n, q;

scanf ("%d", &q);

for (int i=0; i<q; i++){
	scanf("%d", &n);
if (n <=20 && n >=10){
	in++;
} else {
	out++;
	}
}
printf ("%d in\n%d out", in, out);
return 0;
}
