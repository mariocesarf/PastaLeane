#include <stdio.h>
#include <stdlib.h>
int main (){
 int a = 1, b = 2, c = 3;
 float y = ++a/a && !b && c||b||-a+4 * c > !! b;
printf("%d", y);
return 0;
}
