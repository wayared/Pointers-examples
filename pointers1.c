#include <stdio.h>

int main(){
int *a;
int *b;
int c = 5;
a = &c;
b = a;
c = 10;
/*En este punto a, b apuntan al mismo sitio de memoria*/
printf("a = %d \t b = %d \t c = %d\n", *a, *b, c);

}
