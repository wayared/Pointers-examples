#include <stdio.h>

/*
 Existen dos formas de enviar parámetros en una función, por
referencia y por valor.*/

//int main(){
//void swap(int x, int y) /* Por valor*/

//{
//int temp;
//temp = x;
//x = y;
//y = temp;
//}
//int x = 5;
//int y = 7;
//swap( x, y);
/* En este punto x será 5, y será 7 */
//printf("x=%d y=%d\n",x,y);
//}


/*Existen dos formas de enviar parámetros en una función, por
referencia y por valor.*/
int main(){
void swap(int *px, int *py) /* Por referencia */
{
int temp;
temp = *px;
*px = *py;
*py = temp;
}
int x = 5;
int y = 7;
swap( &x, &y);
/* En este punto x será 7 y y 5 */
printf("x=%d y=%d\n",x,y);
}
